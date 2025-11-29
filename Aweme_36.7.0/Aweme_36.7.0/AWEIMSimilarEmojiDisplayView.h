@class UIStackView, NSString, UITapGestureRecognizer, BDImageView, UIButton, MASConstraint, NSNumber, UILabel;
@protocol AWEIMQuickLookCollectionViewCellEventProtocol;

@interface AWEIMSimilarEmojiDisplayView : UIView

@property (retain, nonatomic) BDImageView *emoticonPreview;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *addEmoticonButton;
@property (retain, nonatomic) UIButton *viewOrAddBtn;
@property (retain, nonatomic) UIButton *openSubscribeButton;
@property (retain, nonatomic) UITapGestureRecognizer *titleTapGes;
@property (weak, nonatomic) MASConstraint *addEmoticonLeftConstraint;
@property (weak, nonatomic) MASConstraint *addButtonTopConstraint;
@property (weak, nonatomic) MASConstraint *emoticonPreviewTopConstraint;
@property (retain, nonatomic) NSNumber *emojiID;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) unsigned long long currentStickerType;
@property (nonatomic) BOOL didFetchSubscribeData;
@property (nonatomic) BOOL currentEmojiDeleted;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) id<AWEIMQuickLookCollectionViewCellEventProtocol> delegate;

- (void)stopAnimationIfNeed;
- (id)p_createButton;
- (void)renderWithDisplayModel:(id)a0 context:(id)a1;
- (void)p_setupAndLayoutViews;
- (void)addQuickLookViewLayout;
- (void)didTapTitleLabel:(id)a0;
- (void)p_configTitleWithTitleViewModel:(id)a0;
- (void)p_configButtonsWithButtonViewModels:(id)a0;
- (void)configDataWithDisplayModel:(id)a0 context:(id)a1;
- (void)updateActionButtonConstraint;
- (void)trackSubscribeShowWithType:(id)a0 isCurrentVIP:(BOOL)a1;
- (void)fetchSubscribeInfoWithDisplayModel:(id)a0 Completion:(id /* block */)a1;
- (void)p_configButton:(id)a0 withViewModel:(id)a1;
- (void).cxx_destruct;
- (void)clearImage;
- (id)init;
- (void)didTapButton:(id)a0;
- (void)setupView;
- (void)didTapDown:(id)a0;

@end
