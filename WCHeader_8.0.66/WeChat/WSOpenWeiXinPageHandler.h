@class NSString, MMUIViewController, CreateChatLogic;

@interface WSOpenWeiXinPageHandler : NSObject <CreateChatLogicDelegate>

@property (class, readonly, nonatomic) WSOpenWeiXinPageHandler *sharedInstance;

@property (retain, nonatomic) CreateChatLogic *chatLogic;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
