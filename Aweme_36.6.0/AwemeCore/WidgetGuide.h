@class NSString;

@interface WidgetGuide : IESLivePBBaseMessage

@property (nonatomic) BOOL isAnchor;
@property (copy, nonatomic) NSString *guideText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *buttonSchemaURL;
@property (copy, nonatomic) NSString *guideTextTag;
@property (copy, nonatomic) NSString *buttonType;

+ (id)descriptor;

@end
