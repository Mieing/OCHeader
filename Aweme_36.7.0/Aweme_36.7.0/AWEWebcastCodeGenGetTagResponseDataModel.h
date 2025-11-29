@class NSString;

@interface AWEWebcastCodeGenGetTagResponseDataModel : AWEBaseDataModel

@property (nonatomic) BOOL show;
@property (copy, nonatomic) NSString *tagId;
@property (nonatomic) long long tagType;
@property (nonatomic) long long tagStatus;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) int frozenDuration;
@property (nonatomic) BOOL enableChange;
@property (nonatomic) int onStatusDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
