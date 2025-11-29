@class NSString, UIView;

@interface DUXNavigationBarContentAction : NSObject <IESLLNavigationBarContentAction, DUXNavigationBarAction>

@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) struct CGSize { double x0; double x1; } actionSize;
@property (nonatomic) double actionPadding;
@property (nonatomic) long long enlargeType;
@property (nonatomic) double maxScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) double actionPadding;
@property (nonatomic) unsigned long long enlargeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithContentView:(id)a0 withActionSize:(struct CGSize { double x0; double x1; })a1;
+ (id)actionWithContentView:(id)a0 withActionSize:(struct CGSize { double x0; double x1; })a1 withActionPadding:(double)a2;
+ (id)actionWithContentView:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionView;

@end
