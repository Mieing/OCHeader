@interface WCAdInteractionResourceLayoutInfo : NSObject <NSCoding>

@property (nonatomic) double oriWidth;
@property (nonatomic) double oriHeight;
@property (nonatomic) double oriPaddingLeft;
@property (nonatomic) double oriPaddingRight;
@property (nonatomic) double oriPaddingTop;
@property (nonatomic) double oriPaddingBottom;
@property (nonatomic) unsigned long long safeAreaTypeTop;
@property (nonatomic) unsigned long long safeAreaTypeBottom;
@property (nonatomic) unsigned long long safeAreaTypeLeft;
@property (nonatomic) unsigned long long safeAreaTypeRight;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double paddingLeft;
@property (readonly, nonatomic) double paddingRight;
@property (readonly, nonatomic) double paddingTop;
@property (readonly, nonatomic) double paddingBottom;
@property (nonatomic) unsigned long long verticalAlignType;
@property (nonatomic) unsigned long long horizontalAlignType;
@property (nonatomic) double absolutePositionX;
@property (nonatomic) double absolutePositionY;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
