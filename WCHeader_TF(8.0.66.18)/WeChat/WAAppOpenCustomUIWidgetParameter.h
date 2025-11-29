@class UIView;

@interface WAAppOpenCustomUIWidgetParameter : MMObject

@property (nonatomic) unsigned long long pageTarget;
@property (nonatomic) unsigned long long componentTarget;
@property (retain, nonatomic) UIView *widgetView;
@property (copy, nonatomic) id /* block */ layoutBlock;
@property (nonatomic) unsigned long long source;
@property (nonatomic) BOOL hasAlreadyAddToSuperview;

- (id)widgetIdentifier;
- (void).cxx_destruct;

@end
