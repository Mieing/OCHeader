@class BDPScreenContentProtector;

@interface BDPContentPlayer : NSObject

@property (retain, nonatomic) BDPScreenContentProtector *protector;

- (void)enableUserScreenRecord;
- (void)disableUserScreenRecord;
- (void).cxx_destruct;
- (id)init;
- (void)setContentView:(id)a0;

@end
