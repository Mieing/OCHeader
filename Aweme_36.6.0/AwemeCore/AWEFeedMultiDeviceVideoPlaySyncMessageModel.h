@class NSDictionary, NSString, AWEFeedMultiDeviceVideoPlaySyncContinueInfoModel;

@interface AWEFeedMultiDeviceVideoPlaySyncMessageModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *pointDataDic;
@property (nonatomic) long long messageType;
@property (nonatomic) long long deviceID;
@property (nonatomic) long long userID;
@property (copy, nonatomic) NSString *pointDataStr;
@property (nonatomic) long long toDeviceType;
@property (retain, nonatomic) AWEFeedMultiDeviceVideoPlaySyncContinueInfoModel *continueInfoModel;
@property (copy, nonatomic) NSString *roomSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)continueInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
