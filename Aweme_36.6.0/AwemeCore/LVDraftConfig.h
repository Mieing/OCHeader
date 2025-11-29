@class NSString;

@interface LVDraftConfig : NSObject {
    struct shared_ptr<CutSame::Config> { struct Config *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (nonatomic) BOOL videoMuted;
@property (nonatomic) long long adjustMaxIndex;
@property (nonatomic) long long extractAudioLastIndex;
@property (copy, nonatomic) NSString *lyricsRecognitionID;
@property (nonatomic) BOOL lyricsSync;
@property (nonatomic) long long originalSoundLastIndex;
@property (nonatomic) long long recordAudioLastIndex;
@property (nonatomic) long long stickerMaxIndex;
@property (copy, nonatomic) NSString *subtitleRecognitionID;
@property (nonatomic) BOOL subtitleSync;
@property (nonatomic) BOOL videoMute;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Config> { struct Config *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::Config> { struct Config *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Config> { struct Config *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
