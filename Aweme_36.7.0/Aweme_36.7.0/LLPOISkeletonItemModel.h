@class NSArray, LLPOISkeletonExpression, LLPOISkeletonItemRepeatModel;

@interface LLPOISkeletonItemModel : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (retain, nonatomic) NSArray *itemColorsArray;
@property (nonatomic) long long gradientDirection;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) LLPOISkeletonItemRepeatModel *repeatModel;
@property (retain, nonatomic) LLPOISkeletonExpression *xExpression;
@property (retain, nonatomic) LLPOISkeletonExpression *yExpression;
@property (retain, nonatomic) LLPOISkeletonExpression *widthExpression;
@property (retain, nonatomic) LLPOISkeletonExpression *heightExpression;
@property (retain, nonatomic) LLPOISkeletonExpression *whRatioExpression;
@property (retain, nonatomic) LLPOISkeletonExpression *repeatXExpression;
@property (retain, nonatomic) LLPOISkeletonExpression *repeatYExpression;
@property (nonatomic) BOOL isGeneratedInNative;

- (void).cxx_destruct;

@end
