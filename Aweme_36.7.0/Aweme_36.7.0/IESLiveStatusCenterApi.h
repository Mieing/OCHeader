@interface IESLiveStatusCenterApi : HTSLiveApi

- (void)uploadTapedSuggestWithRoomID:(id)a0 suggestId:(id)a1;
- (void)requestForPanelDataWithRoomID:(id)a0 completeBlock:(id /* block */)a1;

@end
