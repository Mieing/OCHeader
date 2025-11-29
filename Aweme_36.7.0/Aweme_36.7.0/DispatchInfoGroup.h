@class NSString, NSNumber;

@interface DispatchInfoGroup : NSObject

@property (copy, nonatomic) NSString *originalHost;
@property (copy, nonatomic) NSString *dispatchHost;
@property (retain, nonatomic) NSNumber *dispatchTime;
@property (nonatomic) BOOL sentAlready;

- (void)setInfo2Task:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
