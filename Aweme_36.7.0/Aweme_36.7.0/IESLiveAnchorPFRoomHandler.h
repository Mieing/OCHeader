@interface IESLiveAnchorPFRoomHandler : IESLiveAnchorPFBaseHandler

- (void)onAppWillTerminate;
- (id)providedPerfInfo;
- (void)processBasePerfInfo:(id)a0;
- (void)cleanRoomID;
- (void)saveRoomID;
- (void)didLoad;
- (void)addObservers;
- (void)didUnload;

@end
