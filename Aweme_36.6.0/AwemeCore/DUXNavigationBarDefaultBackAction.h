@class UIButton, NSString;

@interface DUXNavigationBarDefaultBackAction : NSObject <DUXNavigationBarAction>

@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) UIButton *imageButton;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) double actionPadding;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithClickBlock:(id /* block */)a0;

@end
