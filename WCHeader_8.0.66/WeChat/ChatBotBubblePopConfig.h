@class NSString, UIImage, UIColor;

@interface ChatBotBubblePopConfig : NSObject

@property (copy, nonatomic) NSString *contentText;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *bubbleColor;
@property (retain, nonatomic) UIColor *viewBackgroundColor;
@property (nonatomic) double viewDiameter;
@property (nonatomic) double imageDiameter;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double contentTextLeft;
@property (copy, nonatomic) UIColor *contentTextColor;
@property (nonatomic) double contentTextSize;
@property (nonatomic) double expansionFactor;
@property (nonatomic) double popAnimationDuration;
@property (nonatomic) double disMissAnimationDelay;
@property (nonatomic) double disMissAnimationDuration;

- (id)init;
- (void).cxx_destruct;

@end
