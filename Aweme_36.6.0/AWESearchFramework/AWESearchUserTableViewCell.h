@class AWESearchAladdinUserMusicListView, UIView, AWEBillboardLabel, NSString, UIImageView, AWESearchAladdinVideoListView, AWESearchUser, NSDictionary, UILabel;
@protocol AWELiveStoryBrowserTagViewProtocol, AWEFeedLiveMarkViewProtocol;

@interface AWESearchUserTableViewCell : AWEUIListTableViewCell <AWEUserMessage>

@property (retain, nonatomic) AWEBillboardLabel *starNameLabel;
@property (retain, nonatomic) UIImageView *recommendImageView;
@property (retain, nonatomic) UILabel *recommendReasonLabel;
@property (retain, nonatomic) UIView<AWELiveStoryBrowserTagViewProtocol> *bottomLiveTagView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) AWESearchUser *userModel;
@property (retain, nonatomic) AWESearchAladdinVideoListView *videoListView;
@property (retain, nonatomic) AWESearchAladdinUserMusicListView *musicListView;
@property (retain, nonatomic) NSDictionary *paramsDict;
@property (copy, nonatomic) id /* block */ goToStarBillboardTrackEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeightWithModel:(id)a0;
+ (double)heightForModel:(id)a0;
+ (double)kVideoListViewTopMargin;
+ (double)kVideoListViewBottomMargin;
+ (long long)cellType;
+ (double)iconWidth;
+ (id)identifier;
+ (double)cellHeight;

- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (id)initWithCellType:(long long)a0 cellStyle:(long long)a1 reuseIdentifier:(id)a2;
- (void)addHightlightWithAttributeString:(id)a0 prefixLength:(long long)a1 positions:(id)a2;
- (void)configureWithModel:(id)a0 isRecommended:(BOOL)a1;
- (void)trackSearchResultClickEventWithType:(id)a0;
- (void)canEnterLiveRoom;
- (void)goToStarBillboard;
- (void)iconImageViewTap;
- (void)configureWithModel:(id)a0 isRecommended:(BOOL)a1 topLiveTag:(BOOL)a2;
- (void)configInfoLabelText:(id)a0;
- (void)updateTextLabel;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)layoutSubviews;
- (void)dealloc;

@end
