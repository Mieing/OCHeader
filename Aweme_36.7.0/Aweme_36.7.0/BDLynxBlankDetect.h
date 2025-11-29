@interface BDLynxBlankDetect : NSObject

+ (void)checkLynxBlank:(id)a0 withAllowListBlock:(id /* block */)a1 result:(id /* block */)a2;
+ (void)startCheckWithView:(id)a0 allowListBlcok:(id /* block */)a1 result:(id /* block */)a2;
+ (void)calcValidAreaPercentageWithOriginalView:(id)a0 currentView:(id)a1 flag:(char *)a2 elementCount:(long long *)a3 widthUnit:(double)a4 heightUnit:(double)a5 maxWidthUnitCount:(unsigned long long)a6 maxHeightUnitCount:(unsigned long long)a7 viewDic:(id)a8 validViewDic:(id)a9 hasValidElement:(BOOL *)a10 allowListBlcok:(id /* block */)a11;
+ (BOOL)checkIfSingleViewIsValid:(id)a0 isValidElement:(BOOL *)a1 allowListBlcok:(id /* block */)a2;
+ (void)fillFlagWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 flag:(char *)a1 widthUnit:(double)a2 heightUnit:(double)a3 maxWidthUnitCount:(unsigned long long)a4 maxHeightUnitCount:(unsigned long long)a5;
+ (void)startBlankDetectWithModel:(id)a0 lynxView:(id)a1;

@end
