@class NSString, UIImageView, GameShareNameCardViewModel, UILabel;

@interface GameShareNameCardCellView : CommonMessageCellView <MMImageLoaderObserver>

@property (readonly, nonatomic) GameShareNameCardViewModel *viewModel;
@property (retain, nonatomic) UIImageView *headImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void)initNicknameLabel;
- (void)initDescLabel;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
