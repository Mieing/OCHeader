@class NSString;

@interface AWEFollowCollectToTargetInfoModel : AWEBaseApiModel

@property (nonatomic) long long remainNumber;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *unfinishedTemplate;
@property (copy, nonatomic) NSString *finishedTemlpate;
@property (nonatomic) BOOL isMutualFollowed;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
