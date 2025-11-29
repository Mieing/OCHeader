@class NSArray, NSString;

@interface AWEAlbumFlashbackWindowConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *enableShootWay;
@property (nonatomic) long long showAuthorityLimit;
@property (nonatomic) long long showEntranceCount;
@property (nonatomic) long long hideEntranceLimit;
@property (nonatomic) long long prepareAggregateDay;
@property (nonatomic) BOOL enableDismissStrategy;
@property (copy, nonatomic) NSString *flashBackLogo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
