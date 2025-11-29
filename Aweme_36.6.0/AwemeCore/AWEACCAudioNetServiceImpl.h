@class NSString;

@interface AWEACCAudioNetServiceImpl : NSObject <ACCAudioNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateAudioTrackWithId:(id)a0 audiotrackUri:(id)a1 completion:(id /* block */)a2;
- (void)updateAudioTrackWithId:(id)a0 audiotrackUri:(id)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)updateAudioTrackWithId:(id)a0 audiotrackUris:(id)a1 vids:(id)a2 params:(id)a3 completion:(id /* block */)a4;

@end
