@class UIView, MMWebImageView, NSString, MMFinderLiveKTVSongItem, WCFinderLiveAnchorLogReporter, MMFinderLiveTask, MMFinderLiveTaskId, MMUILabel, MMUIButton, MMUIActivityIndicatorView;

@interface MMFinderLiveKTVSongTableViewCell : UITableViewCell

@property (copy, nonatomic) id /* block */ songOperationBlock;
@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) WCFinderLiveAnchorLogReporter *anchorReporter;
@property (retain, nonatomic) MMFinderLiveKTVSongItem *songItem;
@property (retain, nonatomic) NSString *greenText;
@property (nonatomic) BOOL banOriginAuthorText;
@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *segmentLabel;
@property (retain, nonatomic) MMUILabel *musicAnchorLabel;
@property (retain, nonatomic) MMUILabel *durationLabel;
@property (retain, nonatomic) MMUIButton *requestButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIView *bottomLine;

+ (double)cellHeightWithState:(unsigned long long)a0;
+ (id)identifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)commonInit;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)customLayoutUI;
- (void)willAppear:(unsigned long long)a0;
- (BOOL)shouldHideRequest;
- (void)createSegmentLabel;
- (void)processGreenText;
- (void)markGreen:(id)a0 needAppend:(BOOL)a1 onLabel:(id)a2;
- (id)parseDuration:(int)a0;
- (void)requestButtonAction;
- (void)onRequestSongItemReturned:(id)a0 success:(BOOL)a1;
- (void).cxx_destruct;

@end
