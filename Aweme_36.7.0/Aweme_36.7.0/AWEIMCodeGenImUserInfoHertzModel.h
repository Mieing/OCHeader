@class NSString, AWEIMCodeGenUrlStructHertzModel;

@interface AWEIMCodeGenImUserInfoHertzModel : AWEBaseDataModel

@property (nonatomic) long long uid;
@property (copy, nonatomic) NSString *secUid;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) AWEIMCodeGenUrlStructHertzModel *avatarThumbModel;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
