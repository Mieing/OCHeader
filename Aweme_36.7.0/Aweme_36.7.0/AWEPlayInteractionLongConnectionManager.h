@class NSString;
@protocol AWEHPMessageDataObserverProtocol, AWEInteractionMessageManagerProtocol, AWEHPMessageManagerProtocol, AWEInteractionMessageDataObserverProtocol;

@interface AWEPlayInteractionLongConnectionManager : NSObject <AWEPlayInteractionLongConnectionManagerProtocol>

@property (retain, nonatomic) id<AWEHPMessageManagerProtocol, AWEHPMessageDataObserverProtocol> messageManager;
@property (retain, nonatomic) id<AWEInteractionMessageManagerProtocol, AWEInteractionMessageDataObserverProtocol> interactionMessageManager;
@property (retain, nonatomic) id messageCenter;
@property (retain, nonatomic) NSString *mmkvRelativePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

@end
