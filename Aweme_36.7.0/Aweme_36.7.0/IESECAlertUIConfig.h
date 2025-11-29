@interface IESECAlertUIConfig : NSObject

@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) double middlePadding;
@property (nonatomic) double imageTopPadding;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double imageRadius;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double maxTotalWidth;
@property (nonatomic) double maxCustomViewHeight;

- (id)init;

@end
