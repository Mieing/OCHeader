@class NSString, UIColor;

@interface LatexParam : NSObject

@property (copy, nonatomic) NSString *content;
@property (nonatomic) double texWidth;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSString *fontName;
@property (nonatomic) long long fontStyle;
@property (nonatomic) double lineSpace;
@property (nonatomic) long long align;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double imageScale;
@property (nonatomic) BOOL enablePhysicsFormula;
@property (nonatomic) BOOL enableRollbackAnalysis;
@property (nonatomic) long long splitStyle;

- (void).cxx_destruct;
- (id)init;

@end
