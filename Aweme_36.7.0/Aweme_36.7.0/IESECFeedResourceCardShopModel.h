@class NSString, IESECURLModel, NSArray;

@interface IESECFeedResourceCardShopModel : IESECFeedResourceCardBaseNode

@property (nonatomic) long long style;
@property (nonatomic) long long shopId;
@property (copy, nonatomic) NSString *shopName;
@property (retain, nonatomic) IESECURLModel *logo;
@property (retain, nonatomic) IESECURLModel *brandIcon;
@property (nonatomic) BOOL inLive;
@property (retain, nonatomic) IESECURLModel *liveIcon;
@property (copy, nonatomic) NSArray *reasonTags;
@property (copy, nonatomic) NSString *link;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
