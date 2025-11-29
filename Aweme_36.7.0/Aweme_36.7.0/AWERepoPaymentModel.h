@class NSString, NSArray;

@interface AWERepoPaymentModel : NSObject <ACCRepositoryRequestParamsDeprecated, ACCRepoModelDraftProtocol, ACCRepositoryReeditContextProtocol, AWERepoPaymentData, ACCRepoRegister>

@property (nonatomic) unsigned long long paidType;
@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *productTitle;
@property (copy, nonatomic) NSString *coverURI;
@property (nonatomic) long long previewStartTime;
@property (nonatomic) long long previewTime;
@property (nonatomic) unsigned long long previewType;
@property (copy, nonatomic) NSArray *anchorInfos;
@property (copy, nonatomic) NSArray *mountVideoLists;
@property (copy, nonatomic) NSArray *combProducts;
@property (nonatomic) BOOL hasChangeTitle;
@property (nonatomic) BOOL hasChangeCover;
@property (nonatomic) BOOL hasChangeTrialTime;
@property (nonatomic) BOOL isShowingHint;
@property (nonatomic) BOOL isManuallyChoosePaidType;
@property (nonatomic) BOOL isManuallyChooseSalesForm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)draft_DTOModelClass;
+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (void)draft_updateWithDTOModel:(id)a0;
- (id)draft_DTOModel;
- (void)configWithItem:(id)a0;
- (void)configWithItems:(id)a0;
- (void)updateFromAweme:(id)a0;
- (BOOL)enablePayment;
- (BOOL)isModifiedComparesToModel:(id)a0;
- (id)isModifiedTrackInfoComparesToModel:(id)a0;
- (long long)paymentPreviewDuration;
- (BOOL)hasChangeConfigContent;
- (id)paymentTrackExtras;
- (id)paymentEditRequestParams;
- (id)stringForPaidMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
