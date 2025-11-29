@class NSString, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveReplayAuthorNormalModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSNumber *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) IESECLiveImageURLModel *avatarThumb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
