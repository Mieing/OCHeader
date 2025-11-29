@interface IESIMGroupParticipantTagComponent : AWEIMFlexComponentSwiftAdapter <IESIMGroupParticipantTagDataMessage> {
    void /* unknown type, empty encoding */ dataService;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)afterInitialComponentAllResolved:(id)a0;
- (void)didConversationPageMemoryTagDataUpdate:(id)a0;
- (void)afterRenderCellDidFinished;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
