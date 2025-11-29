@class NSString, AWESingleMusicView, UIView;
@protocol ACCLoadingViewProtocol;

@interface ACCASSelectMusicChallengeTableViewCell : UITableViewCell <AWESingleMusicViewDelegate, AWEASMusicCellProtocol>

@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) BOOL isLastOne;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (nonatomic) double loadingAfterDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isEliteVersion;
@property (nonatomic) BOOL showMore;
@property (nonatomic) BOOL showClipButton;
@property (retain, nonatomic) AWESingleMusicView *musicView;
@property (copy, nonatomic) id /* block */ tapWhileLoadingBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ moreButtonClicked;
@property (copy, nonatomic) id /* block */ favouriteBlock;
@property (copy, nonatomic) id /* block */ clipBlock;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ promotionTagClickBlock;

+ (double)recommendedHeight;
+ (double)verticalPadding;
+ (id)identifier;

- (void)configWithChallengeMusic:(id)a0 isLastOne:(BOOL)a1 loadingAfterDelay:(double)a2;
- (void)p_didPickMusic:(id)a0 withFetchdAction:(id /* block */)a1;
- (void)singleMusicViewDidTapUse:(id)a0 music:(id)a1;
- (void)singleMusicViewDidTapMoreButton:(id)a0;
- (BOOL)singleMusicView:(id)a0 enableClipMusic:(id)a1;
- (void)singleMusicViewDidTapClip:(id)a0 music:(id)a1;
- (void)singleMusicViewDidTapFavouriteMusic:(id)a0;
- (void)singleMusicViewDidTapUseWhileLoading;
- (void)singleMusicViewDidTapPromotionTag:(id)a0 music:(id)a1;
- (void)configWithChallengeMusic:(id)a0 isLastOne:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setupUI;

@end
