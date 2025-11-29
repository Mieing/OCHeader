@class NSArray, NSDictionary, NSMutableArray, IESLiveLongPressAwemeStyleFuncModel;
@protocol IESLiveRoomService, IESLiveLongPressActions, IESLiveLongPressViewModelReation;

@interface IESLiveLongPressAwemeStyleViewModel : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSDictionary *trackContext;
@property (retain, nonatomic) id<IESLiveLongPressActions> longPressActionCreator;
@property (copy, nonatomic) id /* block */ complete;
@property (retain, nonatomic) NSArray *longPressItemConfig;
@property (retain, nonatomic) IESLiveLongPressAwemeStyleFuncModel *recommendIMModel;
@property (retain, nonatomic) NSMutableArray *longPressActionArray;
@property (weak, nonatomic) id<IESLiveLongPressViewModelReation> reaction;
@property (nonatomic) BOOL inRoom;

- (BOOL)allowShare;
- (id)buildCommonParams;
- (void)trackDouPlusEvent:(id)a0 withIndex:(unsigned long long)a1;
- (void)trackLiveWindowClick;
- (id)initWithRoom:(id)a0 trackcontext:(id)a1;
- (id)addRecommendIMModel:(id)a0;
- (id)generateRemindModel:(id)a0;
- (id)addOptimizeRecommendModel:(id)a0;
- (id)addFollowModel:(id)a0;
- (id)addDislikeCurrentLiveModel:(id)a0;
- (id)addDislikeLive:(id)a0;
- (id)addReportModel:(id)a0;
- (id)addPipModel:(id)a0;
- (id)generateWidgetModel:(id)a0;
- (id)desktopGuideCommonParams;
- (long long)getSectionTypeFromItemType:(long long)a0;
- (id)addRecordModel:(id)a0;
- (id)addAudioReportModel:(id)a0;
- (id)addPKReportModel:(id)a0;
- (id)addDouPlusModel:(id)a0 withUrl:(id)a1 atIndex:(unsigned long long)a2;
- (void)trackerRecommendToFriends:(id)a0;
- (void)trackerRecommendToFriendsGuideShow;
- (void)trackerShowRecommendToFriends:(id)a0;
- (void)trackLiveWindowShow;
- (void)trackEventForDesktopGuideShowWithType:(id)a0;
- (void)trackEventForDesktopGuideClickWithType:(id)a0;
- (void)showWidgetGuideView;
- (void)trackRecordShow;
- (id)itemConfigWithIdentity:(id)a0 from:(id)a1;
- (void)trackEvent:(id)a0 withParam:(id)a1;
- (void)buildLongPressActionArray:(id /* block */)a0;
- (id)addDislikeContentModel:(id)a0;
- (id)addDislikeAnchorModel:(id)a0;
- (void).cxx_destruct;

@end
