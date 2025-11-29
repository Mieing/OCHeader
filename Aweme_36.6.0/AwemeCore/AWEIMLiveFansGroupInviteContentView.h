@class NSObject, AWEIMLiveFansGroupInviteViewController;
@protocol AWEIMLiveFansGroupInviteContentViewDelegate;

@interface AWEIMLiveFansGroupInviteContentView : UIView

@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) AWEIMLiveFansGroupInviteViewController *liveFansGroupInviteVC;
@property (weak, nonatomic) NSObject<AWEIMLiveFansGroupInviteContentViewDelegate> *delegate;

- (void)configWithConversation:(id)a0 backgroundColor:(id)a1;
- (void)p_closeFansGroupInviteContentView;
- (void).cxx_destruct;

@end
