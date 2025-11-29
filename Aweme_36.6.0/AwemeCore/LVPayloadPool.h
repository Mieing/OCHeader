@class NSArray;

@interface LVPayloadPool : NSObject {
    struct shared_ptr<CutSame::Materials> { struct Materials *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSArray *audioBalances;
@property (copy, nonatomic) NSArray *audioEffectPayloads;
@property (copy, nonatomic) NSArray *audioFadePayloads;
@property (copy, nonatomic) NSArray *audioPayloads;
@property (copy, nonatomic) NSArray *beatPayloads;
@property (copy, nonatomic) NSArray *canvasPayloads;
@property (copy, nonatomic) NSArray *chromaPayloads;
@property (copy, nonatomic) NSArray *effectPayloads;
@property (copy, nonatomic) NSArray *hsl;
@property (copy, nonatomic) NSArray *imagesPayloads;
@property (copy, nonatomic) NSArray *maskPayloads;
@property (copy, nonatomic) NSArray *animationPayloads;
@property (copy, nonatomic) NSArray *placeholderPayloads;
@property (copy, nonatomic) NSArray *speedPayloads;
@property (copy, nonatomic) NSArray *stickerPayloads;
@property (copy, nonatomic) NSArray *tailLeaderPayloads;
@property (copy, nonatomic) NSArray *textTemplates;
@property (copy, nonatomic) NSArray *textPayloads;
@property (copy, nonatomic) NSArray *transitionPayloads;
@property (copy, nonatomic) NSArray *videoEffectPayloads;
@property (copy, nonatomic) NSArray *videoTrackings;
@property (copy, nonatomic) NSArray *videoPayloads;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::Materials> { struct Materials *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::Materials> { struct Materials *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::Materials> { struct Materials *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allPayloads;

@end
