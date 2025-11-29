@class NSString;

@interface OHRTouchEvent : NSObject <OHRTouchEvent>

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTouch:(id)a0 locationInWindow:(id)a1;

@end
