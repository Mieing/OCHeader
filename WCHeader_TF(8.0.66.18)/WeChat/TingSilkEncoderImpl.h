@class NSMutableData, NSString;

@interface TingSilkEncoderImpl : UnitRCObjcBaseClass <TingSilkEncoder> {
    struct AudioCoder { int x0; void *x1; void *x2; void *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; void *x11; short x12[5][320]; int x13[5][2]; void *x14; } *mCodec;
}

@property (nonatomic) int mSampleRate;
@property (nonatomic) int mEncBitRate;
@property (nonatomic) int mEncLimitLen;
@property (retain, nonatomic) NSMutableData *mOutputCache;
@property (retain, nonatomic) NSMutableData *mLeftData;
@property (nonatomic) int mLeftLen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
