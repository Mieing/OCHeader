@class NSString, UIView;
@protocol IESIMLoadingViewProtocol;

@interface IESIMConversationB2CBridgeService : HTSService <IESIMConversationB2CBridgeService>

@property (retain, nonatomic) UIView<IESIMLoadingViewProtocol> *businessLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
