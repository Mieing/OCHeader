@class NSString, NSURL;

@interface AWEIMFGHFansGroupInfoModel : AWEBaseApiModel

@property (nonatomic) long long groupID;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSURL *avatar;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)params;

@end
