@interface MMFinderLiveKTVScoreBaseFrameUnit : NSObject

@property (nonatomic) char *inBuffer;
@property (nonatomic) int inSize;
@property (nonatomic) double timeOffsetMS;

- (id)initWithInBuffer:(char *)a0 inSize:(int)a1 timeOffsetMS:(double)a2;

@end
