@class NSArray, NSDictionary, NSString, BDARVDataModel;

@interface BDARVPayloadData : NSObject <BDARVJSONModel>

@property (copy, nonatomic) NSArray *meta;
@property (copy, nonatomic) NSDictionary *rawData;
@property (copy, nonatomic) NSDictionary *styleSameLynxRawData;
@property (nonatomic) BOOL styleSame;
@property (readonly, copy, nonatomic) NSDictionary *data;
@property (retain, nonatomic) BDARVDataModel *dataModel;
@property (copy, nonatomic) NSString *requestid;
@property (copy, nonatomic) NSString *timestamp;
@property (nonatomic) BOOL disableNativeSendReward;
@property (copy, nonatomic) NSDictionary *adShoppingDic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultMeta;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
