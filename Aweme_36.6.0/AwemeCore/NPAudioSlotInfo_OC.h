@class NSString;

@interface NPAudioSlotInfo_OC : NPBaseSlotInfo_OC {
    struct shared_ptr<nle::preset::NPAudioSlotInfo> { struct NPAudioSlotInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (readonly, copy, nonatomic) NSString *reasourcePath;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
