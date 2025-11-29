@class UIColor, UIFont, NSString, AWESearchTopBarContext, UIView;
@protocol AWESearchTopBarElementDelegate;

@interface AWESearchTopBarBaseElement : UIView <AWESearchTopBarLifeCycleProtocol>

@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (retain, nonatomic) UIFont *textFont;
@property (nonatomic) double leftSpace;
@property (nonatomic) double rightSpace;
@property (nonatomic) BOOL isFlexible;
@property (nonatomic) BOOL isBackGroudView;
@property (retain, nonatomic) UIColor *bgColor;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long layoutPositon;
@property (nonatomic) unsigned long long layoutPriority;
@property (weak, nonatomic) UIView *parentView;
@property (weak, nonatomic) id<AWESearchTopBarElementDelegate> delegate;
@property (retain, nonatomic) AWESearchTopBarContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
