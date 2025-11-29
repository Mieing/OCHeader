@class NSString, NSDate;

@interface BottomBarTimeTracer : NSObject {
    void /* function */ event;
    void /* function */ startTime;
}

@property (nonatomic, readonly) NSString *event;
@property (nonatomic, copy) NSDate *startTime;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)tick;

@end
