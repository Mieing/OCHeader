@class NSString;

@interface CGPOutputImeState : GPBMessage

@property (nonatomic) BOOL state;
@property (nonatomic) int w;
@property (nonatomic) int h;
@property (nonatomic) int x;
@property (nonatomic) int y;
@property (nonatomic) int fw;
@property (nonatomic) int fh;
@property (copy, nonatomic) NSString *str;

+ (id)descriptor;

@end
