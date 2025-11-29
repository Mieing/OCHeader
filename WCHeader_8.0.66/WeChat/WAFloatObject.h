@class NSString, UIColor;

@interface WAFloatObject : NSObject {
    BOOL _enterScreen;
}

@property (retain, nonatomic) NSString *content;
@property (nonatomic) struct CGPoint { double x; double y; } position;
@property (nonatomic) double initOffset;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double speed;
@property (nonatomic) double textWidth;
@property (nonatomic) double time;

- (void).cxx_destruct;

@end
