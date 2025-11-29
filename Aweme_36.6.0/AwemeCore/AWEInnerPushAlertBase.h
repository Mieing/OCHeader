@class NSObject;
@protocol AWEInnerPushAlertDelegate;

@interface AWEInnerPushAlertBase : NSObject

@property (weak, nonatomic) NSObject<AWEInnerPushAlertDelegate> *delegate;
@property (copy, nonatomic) id /* block */ onClose;
@property (copy, nonatomic) id /* block */ onShow;

- (void)alertDismissed:(BOOL)a0;
- (void).cxx_destruct;

@end
