@class LCInteractRender, NSString, UIView;

@interface IESLiveInteractPureRTCSession : NSObject

@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) LCInteractRender *renderer;
@property (copy, nonatomic) NSString *strUID;

- (void).cxx_destruct;
- (void)removeAllViews;

@end
