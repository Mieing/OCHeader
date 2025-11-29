@protocol IESLiveRoomService;

@interface IESLiveInnerFeedCellPreloadContext : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) long long position;

- (id)initWithRoom:(id)a0 position:(long long)a1;
- (void).cxx_destruct;

@end
