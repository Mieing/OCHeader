@class UILongPressGestureRecognizer, AWEDetailCellTagLabel, UIImageView, NSString, UILabel, AFDInspirationTabItem;
@protocol AWETemplateArtistFunctionDelegate;

@interface AWETemplateArtistCollectionViewCell : UICollectionViewCell <AFDLongPressDelegateProtocol>

@property (retain, nonatomic) AFDInspirationTabItem *item;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) AWEDetailCellTagLabel *topLabel;
@property (retain, nonatomic) UILabel *hiddenLabel;
@property (nonatomic) BOOL isCurrentUser;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWETemplateArtistFunctionDelegate> functionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellIdentifier;

- (void)showNewPressPanelForScene:(id)a0;
- (void)p_updateCoverImage;
- (void)p_updateTagLabel;
- (void)p_addLongPressGesture;
- (BOOL)isNewProfileCollectLargeCharacterModeStatus;
- (void)changeTemplateArtistItem:(long long)a0;
- (void)updateWithInspirationTabItem:(id)a0 isCurrentUser:(BOOL)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)p_handleLongPressGesture:(id)a0;

@end
