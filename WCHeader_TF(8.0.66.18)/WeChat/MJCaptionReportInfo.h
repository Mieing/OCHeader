@class NSString, NSMutableDictionary;

@interface MJCaptionReportInfo : NSObject

@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *postID;
@property (retain, nonatomic) NSString *editID;
@property (readonly, nonatomic) NSMutableDictionary *assetInfoByIDs;
@property (readonly, nonatomic) unsigned long long userModifyTimeCost;

- (id)init;
- (id)getOrCreateAssetInfoWithID:(id)a0;
- (id)getAssetInfoWithID:(id)a0;
- (void)removeAssetInfoWithID:(id)a0;
- (void)addUserModifyTimeCost:(unsigned long long)a0;
- (id)toReportInfoPB;
- (id)toSerializedData;
- (id)description;
- (void).cxx_destruct;

@end
