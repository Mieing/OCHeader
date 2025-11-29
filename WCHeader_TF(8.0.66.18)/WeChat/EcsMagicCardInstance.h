@class NSString, _TtC25MagicCardStarterProtocols22MagicCardStarterHandle;

@interface EcsMagicCardInstance : NSObject

@property (retain, nonatomic) _TtC25MagicCardStarterProtocols22MagicCardStarterHandle *starterHandle;
@property (retain, nonatomic) NSString *frameSetName;

- (void)showMagicCardInContainerView:(id)a0 viewController:(id)a1 bizName:(id)a2 path:(id)a3 frameSetName:(id)a4 frameSetData:(id)a5;
- (void)stopMagicCard;
- (void)notifyJsEventWithAction:(id)a0 data:(id)a1;
- (id)getJsEventWithAction:(id)a0 data:(id)a1;
- (void).cxx_destruct;

@end
