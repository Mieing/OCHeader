@interface CGPInputMouseKey : GPBMessage

@property (nonatomic) int key;
@property (nonatomic) BOOL state;

+ (id)descriptor;

@end
