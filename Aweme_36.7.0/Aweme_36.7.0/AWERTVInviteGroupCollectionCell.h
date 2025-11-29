@class RTVInviteUserCellContext, RTVInviteGroupCellModel, UIImageView, UILabel, BDImageView;
@protocol RxInjector, RTVXRStateRecorder;

@interface AWERTVInviteGroupCollectionCell : RTVCollectionViewCell

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, nonatomic) RTVInviteGroupCellModel *model;
@property (readonly, nonatomic) RTVInviteUserCellContext *context;
@property (readonly, nonatomic) BDImageView *avatarImageView;
@property (readonly, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *selectStateImageView;

+ (Class)aAWEBrandColorAdapterClass;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)willBeginDragging;
- (void)didEndDisplay;
- (void)__createComponents;
- (void)__layoutComponents;
- (id)aAWEBrandColorAdapter;
- (BOOL)__interfaceOrientationLayoutIsPortrait;
- (void)__createDependency;
- (id)__selectStateImage:(BOOL)a0;
- (void)__updateComponents;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)willDisplay;

@end
