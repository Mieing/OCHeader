@class MMUIButton, FinderLiveGuideFollowAdInfoItem, MMUIView, WCFinderHeadImageView, WCFinderAuthInfoIconView, MMUILabel;
@protocol MMFinderLiveAdGuideFollowCellDelegate;

@interface MMFinderLiveAdGuideFollowCell : WCTableViewNormalCellManager

@property (retain, nonatomic) FinderLiveGuideFollowAdInfoItem *info;
@property (nonatomic) BOOL isAnchor;
@property (weak, nonatomic) id<MMFinderLiveAdGuideFollowCellDelegate> delegate;
@property (retain, nonatomic) MMUIView *contentView;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (retain, nonatomic) MMUILabel *nameLabel;
@property (retain, nonatomic) MMUILabel *descLabel;
@property (retain, nonatomic) MMUILabel *followedLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMUIButton *followButton;

- (id)initWithInfo:(id)a0 width:(double)a1 height:(double)a2 delegate:(id)a3;
- (void)initCellConfig;
- (void)setupSubviewsWith:(double)a0 height:(double)a1;
- (void)initSubviewsWith:(double)a0 height:(double)a1;
- (BOOL)shouldAuthIconViewShow;
- (void)updateAuthInfo;
- (void)layoutUI;
- (void)onClickFollow;
- (void)onClickContent;
- (void).cxx_destruct;

@end
