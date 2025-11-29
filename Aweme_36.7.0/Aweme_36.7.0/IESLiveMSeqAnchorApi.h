@interface IESLiveMSeqAnchorApi : HTSLiveApi

- (void)grabMicWitShowId:(long long)a0 completion:(id /* block */)a1;
- (void)updateGrabMicAlertState:(BOOL)a0 forUserId:(long long)a1 completion:(id /* block */)a2;

@end
