@class RTVInviteUserCellContext, NSString, UIImageView, RTVInviteUserCellModel, UIView, UILabel, BDImageView;
@protocol RxInjector, RTVXRStateRecorder;

@interface RTVInviteUserCollectionCell : RTVCollectionViewCell

@property (readonly, weak, nonatomic) id<RTVXRStateRecorder> xrStateRecorder;
@property (readonly, copy, nonatomic) NSString *observerToken;
@property (readonly, nonatomic) BDImageView *avatarImageView;
@property (readonly, nonatomic) UIView *onlineIndicatorView;
@property (readonly, nonatomic) UILabel *nickNameLabel;
@property (readonly, nonatomic) UILabel *onlineStateLabel;
@property (retain, nonatomic) UIImageView *selectStateImageView;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) RTVInviteUserCellModel *model;
@property (readonly, nonatomic) RTVInviteUserCellContext *context;

+ (Class)aAWEBrandColorAdapterClass;

- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)a0 context:(id)a1;
- (void)__createComponents;
- (void)__layoutComponents;
- (id)aAWEBrandColorAdapter;
- (void)__configComponents;
- (BOOL)__interfaceOrientationLayoutIsPortrait;
- (id)__selectStateImage:(BOOL)a0;
- (void)__refreshComponents;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)dealloc;

@end
