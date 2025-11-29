@interface AWEMVChannelRequestDuration : NSObject {
    void /* unknown type, empty encoding */ records;
}

@property (nonatomic) long long capacity;
@property (nonatomic, readonly) double average;

- (void).cxx_destruct;
- (id)init;
- (void)append:(double)a0;

@end
