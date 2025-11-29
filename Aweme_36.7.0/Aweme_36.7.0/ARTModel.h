@class NSString;

@interface ARTModel : NSObject

@property (nonatomic) BOOL use_mmap;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *modelPath;
@property (readonly, nonatomic) char *buffer;
@property (readonly, nonatomic) long long bufSize;
@property (readonly, nonatomic) long long errcode;

- (id)initWithModelName:(id)a0 modelPath:(id)a1;
- (void).cxx_destruct;
- (BOOL)hasError;
- (void)loadModel;
- (BOOL)isAvailable;
- (void)dealloc;

@end
