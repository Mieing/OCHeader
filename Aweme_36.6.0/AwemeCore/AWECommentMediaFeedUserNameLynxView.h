@class NSString, UIView;
@protocol AWECommentMediaFeedUserNameComponentViewProtocol;

@interface AWECommentMediaFeedUserNameLynxView : LynxUI

@property (retain, nonatomic) UIView<AWECommentMediaFeedUserNameComponentViewProtocol> *lynxView;
@property (nonatomic) double maxWidth;
@property (copy, nonatomic) NSString *text;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__501;
+ (id)__lynx_prop_config__622;

- (void)setText:(id)a0 requestReset:(BOOL)a1;
- (void)setMaxWidth:(double)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)createView;

@end
