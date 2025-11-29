@class NSString, UIView;

@interface AWECommentElementLongPressGuideManager : NSObject <DUXPopoverDelegate, AWEAlertProtocol>

@property (retain, nonatomic) UIView *targetView;
@property (copy, nonatomic) id /* block */ onClose;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (void)popoverDidDisappear:(id)a0;
- (id)conditionKey;
- (id)initWithTargetView:(id)a0 generalModel:(id)a1 enterFrom:(id)a2;
- (void).cxx_destruct;

@end
