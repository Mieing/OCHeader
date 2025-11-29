@class NSString, UIColor;

@interface GXTextTagModel : NSObject

@property (nonatomic) double height;
@property (copy, nonatomic) NSString *align;
@property (nonatomic) double offset;
@property (nonatomic) double leftOffset;
@property (nonatomic) double rightOffset;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *backgroundColor;

- (void)setupWithDic:(id)a0;
- (id)initWithDic:(id)a0;
- (void).cxx_destruct;

@end
