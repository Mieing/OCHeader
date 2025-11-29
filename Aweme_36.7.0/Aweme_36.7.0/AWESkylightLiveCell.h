@class AWEConcernSkylightCellModel, NSString, AWESkylightCellEntranceView;

@interface AWESkylightLiveCell : UICollectionViewCell <AWEConcernSkylightCellProtocol>

@property (retain, nonatomic) AWESkylightCellEntranceView *entranceView;
@property (retain, nonatomic) AWEConcernSkylightCellModel *cellModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWELiveModuleServiceDOUYINHTSAdaperClass;
+ (id)reuseIdentifier;

- (void)configWithCellModel:(id)a0;
- (id)liveModuleService;
- (void)playLivePreview;
- (void)stopLivePreview;
- (id)getLivePreviewManager;
- (void)changeBreathAnimationState:(BOOL)a0;
- (id)getTagFromColorWithModel:(id)a0;
- (id)getTagToColorWithModel:(id)a0;
- (BOOL)followTopLiveBreath;
- (void)configUIWithModel:(id)a0 owner:(id)a1 isLinkMic:(BOOL)a2 isPinedUser:(BOOL)a3;
- (id)aAWELiveModuleServiceDOUYINHTSAdaper;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
