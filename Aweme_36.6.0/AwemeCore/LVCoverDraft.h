@class LVPayloadPool, NSString, LVMutableConfig, LVKeyframePool, NSArray, LVPlatform, LVCanvasConfig, LVDraftConfig;

@interface LVCoverDraft : NSObject {
    struct shared_ptr<CutSame::CoverDraft> { struct CoverDraft *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) LVCanvasConfig *canvasConfig;
@property (retain, nonatomic) LVDraftConfig *config;
@property (nonatomic) long long createAt;
@property (nonatomic) long long durationMilliSeconds;
@property (copy, nonatomic) NSString *draftID;
@property (retain, nonatomic) LVKeyframePool *keyframes;
@property (retain, nonatomic) LVPayloadPool *payloadPool;
@property (retain, nonatomic) LVMutableConfig *mutableConfigPrivate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *draftVersion;
@property (retain, nonatomic) LVPlatform *platform;
@property (copy, nonatomic) NSArray *relationships;
@property (copy, nonatomic) NSArray *tracks;
@property (nonatomic) long long updateAt;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *rootPath;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::CoverDraft> { struct CoverDraft *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::CoverDraft> { struct CoverDraft *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::CoverDraft> { struct CoverDraft *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
