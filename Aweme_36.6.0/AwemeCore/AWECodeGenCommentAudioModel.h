@class NSString;

@interface AWECodeGenCommentAudioModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *wave;
@property (nonatomic) long long duration;
@property (nonatomic) int asrStatus;
@property (copy, nonatomic) NSString *asrText;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
