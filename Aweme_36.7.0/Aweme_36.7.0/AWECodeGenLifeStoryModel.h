@class AWECodeGenImageInfoModel, NSString, AWECodeGenUserModel, AWECodeGenVideoModel, NSDictionary, NSArray;

@interface AWECodeGenLifeStoryModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *storyId;
@property (nonatomic) long long createTime;
@property (retain, nonatomic) AWECodeGenUserModel *authorModel;
@property (retain, nonatomic) AWECodeGenVideoModel *videoModel;
@property (copy, nonatomic) NSString *shareUrl;
@property (nonatomic) int duration;
@property (nonatomic) long long awemeType;
@property (nonatomic) BOOL cmtSwt;
@property (nonatomic) long long authorUserId;
@property (copy, nonatomic) NSString *stickers;
@property (copy, nonatomic) NSString *groupId;
@property (retain, nonatomic) AWECodeGenImageInfoModel *imageInfoModel;
@property (copy, nonatomic) NSDictionary *lifeActivityInfo;
@property (copy, nonatomic) NSDictionary *thirdPlatformInfo;
@property (copy, nonatomic) NSArray *interactionStickersArray;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
