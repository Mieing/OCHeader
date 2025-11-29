@class NSString, IESIMCodeGenUrlModel;

@interface IESIMCodeGenCommentUserModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) IESIMCodeGenUrlModel *avatarThumbModel;
@property (nonatomic) int followStatus;
@property (nonatomic) BOOL isBlock;
@property (copy, nonatomic) NSString *remarkName;
@property (nonatomic) int secret;
@property (copy, nonatomic) NSString *secUid;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
