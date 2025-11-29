@interface IESIMTickleImpl.TickleGuideService : NSObject <IESIMTickleGuideService> {
    void /* unknown type, empty encoding */ tickleMsgShowGuideCache;
}

- (BOOL)hasGuideForMessageViewModel:(id)a0;
- (BOOL)shouldShowGuideForMessageViewModel:(id)a0 inConversation:(id)a1;
- (void)markShowedGuideForMessageViewModel:(id)a0 inConversation:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
