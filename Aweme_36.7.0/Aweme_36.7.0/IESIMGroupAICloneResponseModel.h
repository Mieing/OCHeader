@class NSString, IESIMURLModel;

@interface IESIMGroupAICloneResponseModel : NSObject

@property (nonatomic) long long botID;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) IESIMURLModel *avatar;
@property (nonatomic) long long creatorUid;
@property (copy, nonatomic) NSString *creatorSecUid;
@property (copy, nonatomic) NSString *creatorNickname;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
