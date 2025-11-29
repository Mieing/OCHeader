@class NSLock;

@interface AWELongPressPanelLikeViewModel : AWELongPressPanelBaseViewModel

@property (nonatomic) unsigned long long likeActionType;
@property (retain, nonatomic) NSLock *diggLock;

+ (Class)aAWEPlayInteractionAdapterClass;
+ (id)longPressPanelViewModel;

- (id)aAWEPlayInteractionAdapter;
- (void)trackPanelClick;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (void)configIcon;
- (void)likeAweme;
- (void)cancelLikeAweme;
- (void)trackLikeShow;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
