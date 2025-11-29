@class AWESearchEventDispather, NSString, AWESearchTitleComponentModel, NSDictionary, UILabel, UIView;
@protocol AWESearchContainerProtocol, AWESearchComponentProtocol;

@interface AWESearchTitleComponent : AWESearchComponent <AWESearchTitleComponentProvider>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) AWESearchTitleComponentModel *model;
@property (retain, nonatomic) AWESearchEventDispather *eventDispather;
@property (weak, nonatomic) id<AWESearchContainerProtocol> containerContext;
@property (weak, nonatomic) id<AWESearchComponentProtocol> componentContext;
@property (copy, nonatomic) NSDictionary *dictLogExtraInfo;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)a0 width:(double)a1;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)a0 withModel:(id)a1;

- (void)componentDidLoad;
- (void)updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void)componentViewLayoutSubviews;
- (void)p_updateWithModel:(id)a0 forceUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)componentView;

@end
