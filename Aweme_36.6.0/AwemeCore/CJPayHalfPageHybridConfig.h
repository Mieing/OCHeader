@interface CJPayHalfPageHybridConfig : JSONModel

@property (nonatomic) double closeTimeout;
@property (nonatomic) BOOL enableResultPageCloseAnimationFix;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

@end
