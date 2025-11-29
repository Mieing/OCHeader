@class EditImageWidgetTool;

@interface WCEditImageWidgetOperation : WCEditImageOperation

@property (nonatomic) unsigned long long widgetOperationType;
@property (retain, nonatomic) EditImageWidgetTool *widget;

- (void).cxx_destruct;

@end
