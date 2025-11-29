@class NSString, NSNumber, AWEURLModel;

@interface AWEGeneralFilmTVLeadingCreatorInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *creatorId;
@property (retain, nonatomic) AWEURLModel *avatar;
@property (copy, nonatomic) NSString *realName;
@property (copy, nonatomic) NSString *roleName;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSNumber *verificationType;
@property (copy, nonatomic) NSNumber *schemaType;

+ (id)avatarJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
