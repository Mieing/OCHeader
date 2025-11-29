@interface TPMTLDisplayConfig : NSObject

@property unsigned long long colorspace;
@property int maxDisplayLum;
@property int minDisplayLum;

- (id)init;
- (BOOL)isEqual:(id)a0;

@end
