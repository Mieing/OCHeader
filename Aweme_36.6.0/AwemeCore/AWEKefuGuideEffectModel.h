@class NSNumber, NSString, UIImage;

@interface AWEKefuGuideEffectModel : AWEBaseBizConfigModel

@property (retain, nonatomic) NSNumber *safeAreaLeft;
@property (retain, nonatomic) NSNumber *safeAreaRight;
@property (retain, nonatomic) NSNumber *safeAreaTop;
@property (retain, nonatomic) NSNumber *safeAreaBottom;
@property (retain, nonatomic) NSNumber *resourceWidth;
@property (retain, nonatomic) NSNumber *resourceHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } safeArea;
@property (retain, nonatomic) NSString *resourceURL;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize { double width; double height; } resourceSize;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSNumber *animationRepeatCount;
@property (retain, nonatomic) NSNumber *reverse;
@property (retain, nonatomic) NSNumber *rotation;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;

@end
