@class UIColor, NSString;

@interface BDPBubbleTipModel : NSObject

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) double radius;
@property (nonatomic) double triangleWidth;
@property (nonatomic) double triangleHeight;
@property (nonatomic) double triangleRadius;
@property (copy, nonatomic) NSString *tipString;
@property (nonatomic) double reverseOffsetX;
@property (nonatomic) float hideSecond;
@property (nonatomic) float showSecond;
@property (nonatomic) BOOL hideCloseButton;
@property (nonatomic) BOOL useDefaultContent;

- (void).cxx_destruct;

@end
