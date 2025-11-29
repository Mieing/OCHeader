@class NSString, IESECURLModel, NSArray, NSDictionary, NSNumber;

@interface IESECFeedLiveRecommendModel : MTLModel <MTLJSONSerializing>

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
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) NSArray *relationTags;
@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSDictionary *extraData;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *schemeWithProduct;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
