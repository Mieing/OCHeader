@class NSString;

@interface AWEDTOPublishSafeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long enterEditPageTime;
@property (nonatomic) long long enterPublishPageTime;
@property (nonatomic) long long clickStoryPublishBtnTime;
@property (nonatomic) long long clickSaveDraftBtnTime;
@property (nonatomic) long long clickPublishBtnTime;
@property (nonatomic) long long prePublishTaskStartTime;
@property (nonatomic) long long preSyntheticTaskStartTime;
@property (nonatomic) long long publishTaskStartTime;
@property (nonatomic) long long publishTaskUploadFinishTime;
@property (nonatomic) long long publishTaskCreateAwemeStartTime;
@property (nonatomic) long long publishTaskFinishTime;
@property (nonatomic) long long appRestartRecoverPublishTaskTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
