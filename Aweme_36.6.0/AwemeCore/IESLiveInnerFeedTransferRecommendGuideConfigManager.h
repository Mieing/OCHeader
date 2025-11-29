@class IESLiveInnerFeedContext, IESLiveInnerFeedTransferRecommendGuideConfigModel;

@interface IESLiveInnerFeedTransferRecommendGuideConfigManager : NSObject

@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) IESLiveInnerFeedTransferRecommendGuideConfigModel *recommendGuideModel;

- (id)initWithInnerFeedContext:(id)a0;
- (id)rewritedRecommendEnterParams;
- (long long)recommendDragStyle;
- (id)transferEntranceSource;
- (BOOL)canNotLoadmoreContinue;
- (id)transferRecommendGuideItemModel;
- (id)titleLabelDescWithEntranceName:(id)a0 labelTypeKey:(id)a1;
- (id)fetchInnerFeedRoomListString;
- (void).cxx_destruct;

@end
