@interface SightAssetExportError : NSError

@property (nonatomic) BOOL failAtVideoTrack;
@property (nonatomic) BOOL failAtAudioTrack;

- (id)initWithError:(id)a0 failAtVideo:(BOOL)a1 failAtAudio:(BOOL)a2;

@end
