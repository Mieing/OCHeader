@class WidgetRedDotData;

@interface WidgetRedDotResponse : IESLivePBBaseMessage

@property (retain, nonatomic) WidgetRedDotData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
