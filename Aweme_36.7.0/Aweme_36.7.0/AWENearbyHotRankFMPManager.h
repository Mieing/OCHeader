@interface AWENearbyHotRankFMPManager : NSObject

@property (nonatomic) double initTimeInterval;
@property (nonatomic) double requestTimeInterval;

- (void)startShow;
- (id)init;
- (void)startRequest;
- (void)endRequest;

@end
