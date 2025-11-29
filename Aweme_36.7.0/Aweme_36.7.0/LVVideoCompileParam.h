@class NSString;

@interface LVVideoCompileParam : NSObject {
    struct shared_ptr<CutSame::VideoCompileParam> { struct VideoCompileParam *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (copy, nonatomic) NSString *audioFilePath;
@property (nonatomic) long long bps;
@property (copy, nonatomic) NSString *compileJsonStr;
@property (copy, nonatomic) NSString *encodeProfile;
@property (nonatomic) long long fps;
@property (nonatomic) long long gopSize;
@property (nonatomic) long long height;
@property (nonatomic) BOOL isAudioOnly;
@property (nonatomic) BOOL supportHwEncoder;
@property (nonatomic) long long width;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::VideoCompileParam> { struct VideoCompileParam *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<CutSame::VideoCompileParam> { struct VideoCompileParam *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::VideoCompileParam> { struct VideoCompileParam *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
