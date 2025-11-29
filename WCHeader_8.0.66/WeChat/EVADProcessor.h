@class NSDate;
@protocol EVADProcessorDelegate;

@interface EVADProcessor : MMObject {
    BOOL _hasSpeak;
    NSDate *m_dtLastChangeToSilence;
    struct AudioCoder { int x0; void *x1; void *x2; void *x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; void *x11; short x12[5][320]; int x13[5][2]; void *x14; } *m_silkEncoder;
}

@property (nonatomic) BOOL bCurrentDataNeed;
@property (nonatomic) int currentState;
@property (nonatomic) int previousState;
@property (nonatomic) char *delayData;
@property (nonatomic) unsigned int delayDataSize;
@property (nonatomic) void *handle;
@property (nonatomic) BOOL firstStartDetect;
@property (nonatomic) struct circle_buffer { unsigned long long m_read_pos; unsigned long long m_write_pos; unsigned long long m_size; unsigned long long m_capacity; char *m_data; } pcm_delay_buffer;
@property (weak, nonatomic) id<EVADProcessorDelegate> delegate;
@property (nonatomic) double silenceTimeLimit;
@property (nonatomic) float sAndNRation;

- (id)init;
- (void)dealloc;
- (void)setupProcessor;
- (void)processSpxVoiceData:(id)a0 queueItem:(id)a1;
- (void)releaseProcessor;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
