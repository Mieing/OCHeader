@interface CGTouchEvent : NSObject

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) unsigned long long action;
@property (nonatomic) long long pointerId;
@property (nonatomic) double pressure;
@property (nonatomic) double radius;

- (id)dictionary;

@end
