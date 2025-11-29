@class NSString;

@interface IESLivePKScoreBarConfig : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (copy, nonatomic) NSString *leftScoreColorName;
@property (copy, nonatomic) NSString *rightScoreColorName;
@property (copy, nonatomic) NSString *leftBackgroundColorName;
@property (copy, nonatomic) NSString *rightBackgroundColorName;
@property (nonatomic) BOOL isShowScoreStringNotNum;
@property (nonatomic) BOOL isNeedExternalScoreCorners;

- (void).cxx_destruct;

@end
