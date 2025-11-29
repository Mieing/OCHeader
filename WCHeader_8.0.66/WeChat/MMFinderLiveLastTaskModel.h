@class NSMutableArray, MMFinderLiveRouterParams;

@interface MMFinderLiveLastTaskModel : NSObject

@property (nonatomic) BOOL shouldEnterLiveRoomAfterClose;
@property (retain, nonatomic) NSMutableArray *liveContentVMs;
@property (nonatomic) long long currentIndex;
@property (nonatomic) long long tabType;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) MMFinderLiveRouterParams *routeParam;

- (void).cxx_destruct;

@end
