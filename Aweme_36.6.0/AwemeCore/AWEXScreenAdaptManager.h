@class NSString;

@interface AWEXScreenAdaptManager : NSObject <AWEXScreenAdaptManagerStudioProxy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)is9To16StandardSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })standPlayerFrame;
+ (BOOL)needAdaptScreen;
+ (BOOL)aspectFillForRatio:(struct CGSize { double x0; double x1; })a0 isVR:(BOOL)a1 publishViewModel:(id)a2;
+ (BOOL)isLessThan9To16Size:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)isGreaterThan9To16Size:(struct CGSize { double x0; double x1; })a0;
+ (id)maskLayerWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)is9To16StandardRatio:(double)a0;
+ (BOOL)isLessThan9To16Ratio:(double)a0;
+ (BOOL)isGreaterThan9To16Ratio:(double)a0;
+ (BOOL)isRatio:(double)a0 equalTo:(double)a1;
+ (BOOL)isRatio:(double)a0 lessThan:(double)a1;
+ (BOOL)isRatio:(double)a0 greaterThan:(double)a1;
+ (BOOL)aspectFillForRatio:(struct CGSize { double x0; double x1; })a0 publishViewModel:(id)a1;


@end
