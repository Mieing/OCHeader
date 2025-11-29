@class NSString;

@interface AWEACCSaveAlbumImpl : NSObject <ACCSaveAlbumProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasAppliedTemplate:(id)a0;
- (void)hideShareHintIfNeeded:(id)a0;
- (void)createAsyncHandleWithFromID:(id)a0 sourcePublishModel:(id)a1 editService:(id)a2 configuration:(id /* block */)a3 updateSourceModel:(id /* block */)a4 didReady:(id /* block */)a5 callback:(id /* block */)a6;
- (void)fetchPublishModelWithID:(id)a0 completion:(id /* block */)a1;
- (void)updateVideoDurationIfNeeded:(id)a0;
- (void)updateLivePhotoDurationIfNeeded:(id)a0 configuration:(id /* block */)a1;
- (double)p_calculateMaxTextReadAudioDurationWithModel:(id)a0;

@end
