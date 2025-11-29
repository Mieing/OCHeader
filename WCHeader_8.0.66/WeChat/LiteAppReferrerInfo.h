@class NSString, NSDictionary;

@interface LiteAppReferrerInfo : NSObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) NSString *sceneId;
@property (retain, nonatomic) NSDictionary *extraData;
@property (retain, nonatomic) NSString *scenePath;
@property (retain, nonatomic) NSDictionary *innerData;
@property (retain, nonatomic) NSString *snapshotInitData;

- (id)init:(long long)a0 sceneId:(id)a1 extraData:(id)a2;
- (id)toJSON;
- (void).cxx_destruct;

@end
