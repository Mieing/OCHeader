@class NSString, NSArray;
@protocol ACCPublishRepository;

@interface AWEStudioRepoCompanyCouponModel : NSObject <ACCRepositoryRequestParamsDeprecated, AWERepositoryDraftProtocol, ACCRepositoryPublishContextProtocol, ACCRepositoryContextDeprecated>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *companyPublishRequestString;
@property (copy, nonatomic) NSArray *bubbleTools;
@property (weak, nonatomic) id<ACCPublishRepository> repoDeprecated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (void)configModelForQuikStoryBeforePublish:(id)a0;
- (id)p_publishAnchorParams:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
