@class NSString;

@interface TingSilkDecoderImpl : UnitRCObjcBaseClass <TingSilkDecoder> {
    struct StreamAudioDecoder { void *x0; void *x1; int x2; char *x3; int x4; int x5; int x6; int x7; BOOL x8; int x9; int x10; int x11; int x12; void *x13; int x14; int x15; void *x16; } *mCodec;
}

@property (nonatomic) int mSampleRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSampleRate:(int)a0;
- (void)dealloc;
- (id)decode:(id)a0 isLastFrame:(BOOL)a1;

@end
