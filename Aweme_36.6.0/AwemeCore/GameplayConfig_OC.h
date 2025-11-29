@class NSString, NSArray;

@interface GameplayConfig_OC : NSObject {
    struct shared_ptr<media::processor::GamePlayConfig> { struct GamePlayConfig *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSArray *resourceTypes;
@property (copy, nonatomic) NSString *algorithm;
@property (copy, nonatomic) NSString *conf;
@property (copy, nonatomic) NSString *outputType;
@property (copy, nonatomic) NSString *outputPath;
@property (copy, nonatomic) NSString *videoResourceId;
@property (copy, nonatomic) NSString *host;
@property (nonatomic) BOOL showItem;
@property (nonatomic) BOOL showTry;
@property (nonatomic) BOOL isReshape;

- (id)initWithCppModel:(const void *)a0;
- (struct shared_ptr<media::processor::GamePlayConfig> { struct GamePlayConfig *x0; struct __shared_weak_count *x1; })cppModel;
- (void)setoutputType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
