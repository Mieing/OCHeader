@class NSString;

@interface WidgetRedDotData : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
