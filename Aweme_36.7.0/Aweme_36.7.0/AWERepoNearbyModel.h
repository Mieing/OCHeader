@class NSNumber, NSString;

@interface AWERepoNearbyModel : NSObject <ACCRepoRegister, ACCRepositoryRequestParamsDeprecated, NSCopying, AWERepositoryDraftProtocol, ACCRepoNearbyReadonlyData>

@property (nonatomic) BOOL poiFootprintVideo;
@property (retain, nonatomic) NSNumber *publishToNearbyPrivacyType;
@property (nonatomic) BOOL comeFromNearby;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)repo_dataProtocol;

- (id)acc_publishRequestParams:(id)a0;
- (id)initWithDraft:(id)a0;
- (void)saveWithDraft:(id)a0;
- (id)acc_footprintAnchorID;
- (long long)acc_footprintAnchorBusinessType;
- (void)configModelForQuikStoryBeforePublish:(id)a0;
- (BOOL)enablePreferPopup;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateWithModel:(id)a0;

@end
