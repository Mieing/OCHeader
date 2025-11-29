@class IESLiveInnerFeedLiveRoomItemModel, HTSLiveRoom;
@protocol IESLiveDIContext;

@interface IESLiveMultiRoomPreloadParam : NSObject

@property (retain, nonatomic) HTSLiveRoom *room;
@property (weak, nonatomic) IESLiveInnerFeedLiveRoomItemModel *innerFeedItemModel;
@property (retain, nonatomic) id<IESLiveDIContext> parentDIContext;

- (void).cxx_destruct;

@end
