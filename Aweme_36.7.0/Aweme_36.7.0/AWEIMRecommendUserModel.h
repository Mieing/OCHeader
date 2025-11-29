@class NSString, IESIMURLModel, NSArray;

@interface AWEIMRecommendUserModel : IESIMBaseApiModel

@property (nonatomic) long long userID;
@property (copy, nonatomic) NSString *secUID;
@property (copy, nonatomic) NSString *nickname;
@property (retain, nonatomic) IESIMURLModel *avatarThumb;
@property (copy, nonatomic) NSString *shortID;
@property (copy, nonatomic) NSString *uniqueID;
@property (copy, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSArray *tagInfo;
@property (nonatomic) long long status;

+ (id)avatarThumbJSONTransformer;
+ (id)tagInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
