@class NSString;

@interface AWEUserLongVideoProfileModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long accountType;
@property (copy, nonatomic) NSString *notice;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSString *introScheme;
@property (nonatomic) unsigned long long bannerType;
@property (copy, nonatomic) NSString *bannerScheme;
@property (nonatomic) long long longVideoCount;
@property (copy, nonatomic) NSString *autoPlayAwemeId;
@property (copy, nonatomic) NSString *autoPlayHighlightEpisodeId;
@property (nonatomic) BOOL showPlayCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
