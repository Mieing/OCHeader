@class NSArray, MMKV, AWEFeedPadListViewChannelBadgeInfoModel, AWEFeedPadListViewChannelBubbleInfoModel, AWEPadListViewChannelInfo, NSString;
@protocol AWEFeedPadListViewChannelGuideManagerDelegate;

@interface AWEFeedPadListViewChannelGuideManager : NSObject <AWEPadListViewChannelGuideManagerProtocol, AWEActivityLifeCycleProtocol>

@property (retain, nonatomic) AWEPadListViewChannelInfo *channelInfo;
@property (retain, nonatomic) NSArray *bubbleArray;
@property (retain, nonatomic) NSArray *badgeArray;
@property (retain, nonatomic) MMKV *mmkv;
@property (retain, nonatomic) AWEFeedPadListViewChannelBadgeInfoModel *currentBadge;
@property (retain, nonatomic) AWEFeedPadListViewChannelBubbleInfoModel *currentBubble;
@property (nonatomic) BOOL isChannelViewAppear;
@property (nonatomic) BOOL isShowingBadge;
@property (nonatomic) BOOL isShowingBubble;
@property (weak, nonatomic) id<AWEFeedPadListViewChannelGuideManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (void)channelDidLoad;
- (void)showBubbleIfNeed;
- (id)initWithData:(id)a0 extraInfo:(id)a1;
- (BOOL)canShowBadge:(id)a0;
- (BOOL)canShowBubble:(id)a0;
- (void)hideBadgeIfNeed;
- (void)trackNoticeClickIfNeed;
- (void)showBadgeIfNeed;
- (void)autoHideBadgeIfNeed;
- (void)trackNoticeShow:(id)a0;
- (long long)currentBadgeVersion;
- (BOOL)checkIfCurrentTimeInRangeWithStartTime:(double)a0 endTime:(double)a1;
- (void)trackNoticeClick:(id)a0;
- (long long)currentBubbleVersion;
- (void).cxx_destruct;
- (void)timing;

@end
