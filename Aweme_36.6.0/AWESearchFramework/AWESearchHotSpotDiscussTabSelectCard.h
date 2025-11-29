@class AWESearchTracker, AWEModernFeedCellModel, NSString, AWESearchCachalotResultContext, UIView, DUXBaseLabel;
@protocol AWEModernFeedCellContext;

@interface AWESearchHotSpotDiscussTabSelectCard : UIViewController <AWESearchCachalotCardViewProtocol, AWEModernFeedCellControllerProtocol>

@property (retain, nonatomic) UIView *selectBgView;
@property (retain, nonatomic) UIView *splitView;
@property (retain, nonatomic) DUXBaseLabel *generalTab;
@property (retain, nonatomic) DUXBaseLabel *rencentTab;
@property (retain, nonatomic) DUXBaseLabel *tipsLabel;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWESearchCachalotResultContext *cachalotContext;
@property (retain, nonatomic) AWESearchTracker *tracker;
@property (retain, nonatomic) AWEModernFeedCellModel *dataModel;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithViewModel:(id)a0 width:(double)a1;

- (void)configUI;
- (void)trackShow;
- (void)componentClicked;
- (void)componentWillDisplay;
- (void)trackClick;
- (void)p_tabChangedAction:(long long)a0 isClicked:(BOOL)a1;
- (void)generalTabClicked;
- (void)rencentTabClicked;
- (void)switchToCorrespondingTab:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)init;
- (id)componentView;
- (void)updateWithViewModel:(id)a0;
- (void)updateWithModel:(id)a0;

@end
