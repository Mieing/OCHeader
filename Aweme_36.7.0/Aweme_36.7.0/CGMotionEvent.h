@class NSString;

@interface CGMotionEvent : NSObject

@property (copy, nonatomic) NSString *type;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

+ (id)accelerationEventWithData:(id)a0;
+ (id)gyroEventWithData:(id)a0;

- (id)f6:(double)a0;
- (void).cxx_destruct;
- (id)dictionary;

@end
