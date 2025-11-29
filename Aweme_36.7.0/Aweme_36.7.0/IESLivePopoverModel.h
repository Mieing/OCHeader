@class NSString, UIColor, UIFont;

@interface IESLivePopoverModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL disableAutoDismiss;
@property (nonatomic) double autoDismissTime;
@property (nonatomic) unsigned long long position;
@property (nonatomic) struct CGPoint { double x; double y; } targetPoint;
@property (nonatomic) double targetPadding;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *bgColor;
@property (nonatomic) unsigned long long direction;
@property (nonatomic) double percentage;
@property (nonatomic) BOOL clickToDismiss;
@property (nonatomic) BOOL needArrowStyle;

- (void).cxx_destruct;

@end
