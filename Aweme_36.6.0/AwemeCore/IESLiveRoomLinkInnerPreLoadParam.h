@class IESLiveInnerFeedLiveRoomItemModel, HTSLiveRoom;
@protocol IESLiveDIContext;

@interface IESLiveRoomLinkInnerPreLoadParam : IESLiveLinkContextParam

@property (retain, nonatomic) HTSLiveRoom *previousRoom;
@property (retain, nonatomic) HTSLiveRoom *room;
@property (nonatomic) long long itemIndex;
@property (weak, nonatomic) IESLiveInnerFeedLiveRoomItemModel *innerFeedItemModel;
@property (weak, nonatomic) id<IESLiveDIContext> slideDIContext;

- (void).cxx_destruct;

@end
