@class NSString, IESECURLModel, NSArray, IESECLiveOpenSchemaModel, NSNumber;

@interface IESECLiveRecommendModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *liveAuthorUID;
@property (copy, nonatomic) NSString *liveAuthorSecUID;
@property (copy, nonatomic) NSString *roomID;
@property (nonatomic) long long liveStatus;
@property (copy, nonatomic) NSString *liveDescription;
@property (retain, nonatomic) IESECURLModel *liveAuthorIcon;
@property (retain, nonatomic) IESECURLModel *liveCoverImage;
@property (copy, nonatomic) NSString *liveRoomTitle;
@property (retain, nonatomic) IESECURLModel *liveAvatarImage;
@property (copy, nonatomic) NSString *liveAuthorNickName;
@property (retain, nonatomic) NSNumber *liveProductCount;
@property (retain, nonatomic) NSNumber *totalCount;
@property (retain, nonatomic) NSNumber *number;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) NSArray *relationTags;
@property (copy, nonatomic) IESECLiveOpenSchemaModel *openSchema;
@property (copy, nonatomic) NSString *streamData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
