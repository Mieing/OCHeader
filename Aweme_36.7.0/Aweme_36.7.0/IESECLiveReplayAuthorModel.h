@class NSString, NSNumber, IESECLiveImageURLModel;

@interface IESECLiveReplayAuthorModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long followStatus;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) IESECLiveImageURLModel *avatarThumb;
@property (copy, nonatomic) NSString *schema;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) long long liveStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createAuthorWithModel:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
