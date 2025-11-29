@interface AWEYAPRetentionPopupService : HTSService <AWEYAPRetentionPopupService>

- (id)getChannelGuide:(id)a0;
- (void)showChannelGuide:(id)a0 completionConfig:(id)a1;
- (id)showRetain:(id)a0 completion:(id /* block */)a1;
- (void)decideChannelGuide:(id)a0 completion:(id /* block */)a1;
- (void)requestChannelGuide:(id)a0 completion:(id /* block */)a1;
- (id)init;

@end
