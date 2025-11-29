@interface MMLiveFaceEncodeTask : NSObject

@property (nonatomic) char *alphaBuffer;
@property (nonatomic) struct CGSize { double width; double height; } alphaTexSize;

+ (BOOL)checkParamValidForAlphaBuffer:(char *)a0 alphaTexSize:(struct CGSize { double x0; double x1; })a1;
+ (id)encode:(id)a0;
+ (void)clearEncodeStreamBuffer;

- (id)initWithAlphaBuffer:(char *)a0 alphaTexSize:(struct CGSize { double x0; double x1; })a1;
- (void)dealloc;

@end
