@interface IESLiveAdminScreenRecordApi : HTSLiveApi

- (void)requestForVideoUrlWithDraftId:(id)a0 completeBlock:(id /* block */)a1;
- (void)informServerWhetherPublishWithType:(id)a0 adminRecordMessage:(id)a1 roomid:(id)a2 completeBlock:(id /* block */)a3;

@end
