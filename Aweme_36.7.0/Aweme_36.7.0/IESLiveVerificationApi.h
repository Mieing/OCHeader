@interface IESLiveVerificationApi : HTSLiveApi

- (void)fetchIdentifyCodeWithRoomID:(id)a0 anchorID:(id)a1 secAnchorId:(id)a2 completion:(id /* block */)a3;
- (void)fetchIdentifyStatusWithVerificationId:(long long)a0 MsgID:(long long)a1 Verified:(BOOL)a2;

@end
