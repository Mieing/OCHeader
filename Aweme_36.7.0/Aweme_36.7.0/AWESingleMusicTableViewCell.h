@class AWESingleMusicView, NSString, UIView;
@protocol ACCLoadingViewProtocol;

@interface AWESingleMusicTableViewCell : UITableViewCell <AWEASMusicCellProtocol, AWESingleMusicViewDelegate>

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (nonatomic) double loadingAfterDelay;
@property (nonatomic) BOOL showExtraTopPadding;
@property (nonatomic) BOOL needShowPGCMusicInfo;
@property (nonatomic) BOOL showClipButton;
@property (nonatomic) double topPadding;
@property (nonatomic) BOOL isEliteVersion;
@property (nonatomic) BOOL showMore;
@property (retain, nonatomic) AWESingleMusicView *musicView;
@property (copy, nonatomic) id /* block */ tapWhileLoadingBlock;
@property (copy, nonatomic) id /* block */ confirmBlock;
@property (copy, nonatomic) id /* block */ moreButtonClicked;
@property (copy, nonatomic) id /* block */ favouriteBlock;
@property (copy, nonatomic) id /* block */ clipBlock;
@property (copy, nonatomic) id /* block */ enableClipBlock;
@property (copy, nonatomic) id /* block */ promotionTagClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithMusic:(id)a0 baseHeight:(double)a1;

- (void)p_didPickMusic:(id)a0 withFetchdAction:(id /* block */)a1;
- (void)singleMusicViewDidTapUse:(id)a0 music:(id)a1;
- (void)singleMusicViewDidTapMoreButton:(id)a0;
- (BOOL)singleMusicView:(id)a0 enableClipMusic:(id)a1;
- (void)singleMusicViewDidTapClip:(id)a0 music:(id)a1;
- (void)singleMusicViewDidTapFavouriteMusic:(id)a0;
- (void)singleMusicViewDidTapUseWhileLoading;
- (void)singleMusicViewDidTapPromotionTag:(id)a0 music:(id)a1;
- (void)configWithLoadingAfterDelay:(double)a0;
- (id)initWithNewMusicPlayerTypeWithStyle:(long long)a0 reuseIdentifier:(id)a1 newPlayer:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateTopPadding;
- (void)dealloc;
- (void)setupUI;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
