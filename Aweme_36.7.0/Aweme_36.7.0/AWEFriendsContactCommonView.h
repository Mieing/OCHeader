@class NSString, UIImageView, UILabel, UIButton;
@protocol AWEFriendsContactCommonViewDelegate;

@interface AWEFriendsContactCommonView : UIView <AWEFriendsContactCommonViewProtocol>

@property (nonatomic) BOOL shouldUseConstColor;
@property (weak, nonatomic) id<AWEFriendsContactCommonViewDelegate> delegate;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIButton *entryButton;
@property (nonatomic) BOOL shouldHideEntryButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAFDServiceCommonAdapterClass;

- (id)aAFDServiceCommonAdapter;
- (id)initWithConstColor:(BOOL)a0;
- (void)entryButtonDidClicked:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
