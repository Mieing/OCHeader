@class UIView, NSString, AWERecordInspirationDetail, UIImageView, AWERecordInspirationCardHintView, UIButton, AWERecordInspirationCategoryItem, UILabel;
@protocol AWERecordInspirationCardCellDelegate;

@interface AWERecordInspirationCardCell : UICollectionViewCell <AWERecordInspirationCardCellProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *blurImageView;
@property (retain, nonatomic) UIButton *cornerButton;
@property (retain, nonatomic) UILabel *useCountLabel;
@property (retain, nonatomic) UILabel *multiLoraPersonRangeLabel;
@property (retain, nonatomic) UILabel *resourceNameLabel;
@property (retain, nonatomic) UILabel *searchDebugInfoLabel;
@property (retain, nonatomic) UIButton *startRecordButton;
@property (retain, nonatomic) UIImageView *lineView;
@property (retain, nonatomic) UIImageView *preloadStaticCoverImageView;
@property (retain, nonatomic) AWERecordInspirationCardHintView *hintView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *authorAvatarImage;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (nonatomic) BOOL doubleTapOpt;
@property (nonatomic) BOOL hasShowing;
@property (weak, nonatomic) AWERecordInspirationCategoryItem *categoryItem;
@property (retain, nonatomic) AWERecordInspirationDetail *inspirationModel;
@property (weak, nonatomic) id<AWERecordInspirationCardCellDelegate> delegate;
@property (nonatomic) double firstCellFrameStartTime;
@property (retain, nonatomic) UIView *playerView;
@property (nonatomic) long long cellIndex;
@property (nonatomic) BOOL preloadData;
@property (nonatomic) BOOL isAIGCLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)calculateCellHeightWithWidth:(double)a0 inspirationModel:(id)a1 isAIGCLibrary:(BOOL)a2;
+ (BOOL)hasShowSameTake;
+ (double)spaceHeightWithInspirationModel:(id)a0;
+ (BOOL)useAwemeCoverWithInspirationModel:(id)a0;
+ (double)calculateCoverHeightWithWidth:(double)a0 inspirationModel:(id)a1 isAIGCLibrary:(BOOL)a2;

- (void)onThemeChanged;
- (struct CGSize { double x0; double x1; })calculateLabelHeightWithLabel:(id)a0;
- (struct CGSize { double x0; double x1; })calculateCustomLabelHeightWithLabel:(id)a0 font:(id)a1;
- (void)startCoverAnimation;
- (void)stopCoverAnimation;
- (void)updateForLightThemeIfNeeded;
- (BOOL)shouldEnableLightTheme;
- (void)updateActivityUI;
- (id)debugInfoWithModel:(id)a0;
- (void)addAttributes:(id)a0 font:(id)a1 textColor:(id)a2;
- (void)updateCornerIcon:(id)a0 title:(id)a1;
- (void)updateCoverWithInspirationModel:(id)a0;
- (void)customConverPhotoWithInspirationModel:(id)a0;
- (void)sendFirstCellFrameLoadCompletionIfNeed;
- (void)onTakeSameClick;
- (long long)calculateMaxNameLength;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
