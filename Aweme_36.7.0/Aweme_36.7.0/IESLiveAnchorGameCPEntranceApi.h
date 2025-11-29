@interface IESLiveAnchorGameCPEntranceApi : HTSLiveApi

- (void)fetchAnchorStatusWithCompletion:(id /* block */)a0;
- (void)updateAnchorEntranceStatusWithRoomId:(id)a0 showOnToolbar:(BOOL)a1 completion:(id /* block */)a2;
- (void)uploadAnchorAction:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchAnchorEntranceUrlWithRoomId:(id)a0 completion:(id /* block */)a1;

@end
