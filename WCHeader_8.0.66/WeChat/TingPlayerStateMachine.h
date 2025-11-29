@class NSArray;

@interface TingPlayerStateMachine : NSObject

@property (nonatomic) int status;
@property (retain, nonatomic) NSArray *routes;

- (id)init;
- (void)onEvent:(int)a0;
- (void)onEvent:(int)a0 userInfo:(id)a1;
- (void)reset;
- (void).cxx_destruct;

@end
