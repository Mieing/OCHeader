@class UIColor, NSString, AWETwoTuple;

@interface AEKCanvasStyle : NSObject

@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) unsigned long long borderWidth;
@property (nonatomic) BOOL antialiasing;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) NSString *imageURL;
@property (retain, nonatomic) AWETwoTuple *gradientColor;

- (void).cxx_destruct;
- (id)init;

@end
