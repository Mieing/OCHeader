@class NSString;

@interface ACCGetAllPossibleMusicClipDataImpl : NSObject <ACCGetAllPossibleMusicClipData>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _HTSAudioRange { double x0; double x1; })getPossibleAudioRangeWithContext:(id)a0;

@end
