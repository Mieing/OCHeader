@class MMUILabel, NSString, FinderLiveCreatorFunctions, UIView, WCTableViewManager, MMUIButton;
@protocol WCFinderLiveStartLiveSectionCellDelegate;

@interface WCFinderLiveStartLiveSectionCell : UICollectionViewCell

@property (retain, nonatomic) WCTableViewManager *tableViewManager;
@property (retain, nonatomic) FinderLiveCreatorFunctions *functions;
@property (retain, nonatomic) MMUIButton *noticeBtn;
@property (retain, nonatomic) UIView *postSeparatorLine;
@property (retain, nonatomic) MMUIButton *liveBtn;
@property (retain, nonatomic) MMUIButton *liveBtnNoFinder;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) BOOL hasUserFinder;
@property (nonatomic) BOOL hasReportShow;
@property (retain, nonatomic) NSString *finderUsername;
@property (weak, nonatomic) id<WCFinderLiveStartLiveSectionCellDelegate> actionDelegate;

+ (double)cellHeightWithUserHasFinder:(BOOL)a0;
+ (id)cellIdentifier;
+ (id)getChnlextraDictionaryWithFinderUserName:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_setupUI;
- (void)_setupNoticeBtn;
- (void)_setupLiveBtn;
- (void)_setupLiveBtnNoFinder;
- (void)_setupTitle;
- (void)_setupPostSeparatorLine;
- (float)_calculateNicknameLabelMaxWidth:(float)a0;
- (float)_calculateTitleMaxWidth:(float)a0;
- (void)_layoutUI;
- (void)updateWithFinderInfo:(BOOL)a0 finderUserName:(id)a1 finderNickName:(id)a2 finderHeadUrl:(id)a3;
- (void)clickLive;
- (void)clickNotice;
- (void)reportOnCellShow;
- (void)reportOnStartLiveAction;
- (void).cxx_destruct;

@end
