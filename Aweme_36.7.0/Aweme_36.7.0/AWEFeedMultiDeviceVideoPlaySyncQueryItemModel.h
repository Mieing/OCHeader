@class NSString, AWEAwemeModel;

@interface AWEFeedMultiDeviceVideoPlaySyncQueryItemModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long playProgress;
@property (nonatomic) int clientType;
@property (nonatomic) int recordType;
@property (nonatomic) long long createTime;
@property (nonatomic) long long uploadScene;
@property (nonatomic) int fromClient;
@property (nonatomic) long long fromDeviceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
