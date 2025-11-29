@class NSArray, AWEPOISkeletonItemRepeatModel, AWEPOISkeletonExpression;

@interface AWEPOISkeletonItemModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) NSArray *itemColorsArray;
@property (nonatomic) long long gradientDirection;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) AWEPOISkeletonItemRepeatModel *repeatModel;
@property (retain, nonatomic) AWEPOISkeletonExpression *xExpression;
@property (retain, nonatomic) AWEPOISkeletonExpression *yExpression;
@property (retain, nonatomic) AWEPOISkeletonExpression *widthExpression;
@property (retain, nonatomic) AWEPOISkeletonExpression *heightExpression;
@property (retain, nonatomic) AWEPOISkeletonExpression *whRatioExpression;
@property (retain, nonatomic) AWEPOISkeletonExpression *repeatXExpression;
@property (retain, nonatomic) AWEPOISkeletonExpression *repeatYExpression;
@property (nonatomic) BOOL isGeneratedInNative;

- (void).cxx_destruct;

@end
