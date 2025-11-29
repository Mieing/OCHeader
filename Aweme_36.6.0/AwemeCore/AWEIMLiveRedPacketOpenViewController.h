@class AWEIMLiveRedPacketOpenViewModel, AWEIMLiveRedPacketOpenView;
@protocol AWEIMLiveRedPacketMessageProtocol;

@interface AWEIMLiveRedPacketOpenViewController : UIViewController

@property (retain, nonatomic) id<AWEIMLiveRedPacketMessageProtocol> message;
@property (retain, nonatomic) AWEIMLiveRedPacketOpenView *openView;
@property (retain, nonatomic) AWEIMLiveRedPacketOpenViewModel *openViewModel;

- (void)p_addBinds;
- (void)p_constraintSubViews;
- (id)initWithLiveRedPacketMessage:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
