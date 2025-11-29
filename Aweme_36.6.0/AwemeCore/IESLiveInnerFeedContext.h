@class NSNumber, NSString, NSArray, IESLiveInnerFeedTransferFooterView, IESLiveVideoPlayerController, IGListAdapter, IESLiveDI, IESLiveInnerFeedBaseItemModel, IESLiveEnterRoomAisle, UIViewController;
@protocol IESLivePlayerProtocol;

@interface IESLiveInnerFeedContext : NSObject <IESLiveInnerFeedContextProtocol>

@property (copy, nonatomic) id /* block */ afterDidLoad;
@property (retain, nonatomic) NSString *enterFromMerge;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) IESLiveEnterRoomAisle *originRoomAisle;
@property (nonatomic) BOOL isClickRoom;
@property (retain, nonatomic) IESLiveInnerFeedBaseItemModel *currentShowItem;
@property (retain, nonatomic) IESLiveInnerFeedBaseItemModel *nextShowItem;
@property (retain, nonatomic) IESLiveInnerFeedBaseItemModel *lastShowItem;
@property (nonatomic) unsigned long long scrollDirection;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isScrolling;
@property (weak, nonatomic) UIViewController *containerVC;
@property (weak, nonatomic) IGListAdapter *adapter;
@property (weak, nonatomic) IESLiveDI *slideDI;
@property (nonatomic) long long providerType;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *lastPortraitItems;
@property (nonatomic) BOOL isOrientating;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) unsigned long long leapfrogLandscapeCount;
@property (nonatomic) double enterFeedTimestamp;
@property (retain, nonatomic) id<IESLivePlayerProtocol> player;
@property (retain, nonatomic) IESLiveVideoPlayerController *videoPlayer;
@property (nonatomic) long long footerLoadingStyle;
@property (nonatomic) BOOL needRecommendGuideEntrance;
@property (nonatomic) BOOL removeLiveCover;
@property (nonatomic) BOOL liveCoverNeedLoadMore;
@property (nonatomic) BOOL isFromFollowRecommend;
@property (retain, nonatomic) NSNumber *maxTime;
@property (nonatomic) BOOL hasGetRecData;
@property (nonatomic) long long recommendDragStyle;
@property (retain, nonatomic) IESLiveInnerFeedTransferFooterView *footerView;
@property (nonatomic) long long footerStyleSection;
@property (nonatomic) int beginDragPosition;
@property (copy, nonatomic) NSString *sourceBtmToken;
@property (nonatomic) BOOL willFetchRecommendData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void).cxx_destruct;

@end
