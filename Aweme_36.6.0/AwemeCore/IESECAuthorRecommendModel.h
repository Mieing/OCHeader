@class NSString, IESECURLModel;

@interface IESECAuthorRecommendModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) IESECURLModel *avatarImage;
@property (copy, nonatomic) NSString *userNickName;
@property (nonatomic) BOOL isFollowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
