@class UILabel, NSString, UIView;

@interface AnnieXNabBarCustomConentElement : LynxUI

@property (retain, nonatomic) UIView *rootView;
@property (retain, nonatomic) UILabel *textView;
@property (copy, nonatomic) NSString *annieXContainerId;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__741;

- (void)layoutDidFinished;
- (void)setAnnieXContainerId:(id)a0 requestReset:(BOOL)a1;
- (id)containerService;
- (id)pageViewModel;
- (void).cxx_destruct;
- (id)createView;
- (BOOL)hasCustomLayout;

@end
