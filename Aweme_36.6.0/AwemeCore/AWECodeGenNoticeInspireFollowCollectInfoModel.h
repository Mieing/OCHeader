@class NSString;

@interface AWECodeGenNoticeInspireFollowCollectInfoModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *unfinishedTemplate;
@property (copy, nonatomic) NSString *finishedTemlpate;
@property (nonatomic) long long remainNum;
@property (copy, nonatomic) NSString *entityId;
@property (nonatomic) BOOL mutualFollowed;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
