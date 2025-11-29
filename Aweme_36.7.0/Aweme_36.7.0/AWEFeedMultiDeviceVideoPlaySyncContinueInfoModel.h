@class NSString;

@interface AWEFeedMultiDeviceVideoPlaySyncContinueInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long userID;
@property (nonatomic) long long itemID;
@property (nonatomic) long long itemType;
@property (nonatomic) long long playTime;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) long long fromDeviceID;
@property (nonatomic) int fromDeviceType;
@property (nonatomic) int recordType;
@property (nonatomic) long long uploadScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
