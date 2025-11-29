@interface AWEDemaciaStatusModel : AWEBaseApiModel

@property (nonatomic) unsigned long long privacyType;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isFriendVisible;

+ (id)JSONKeyPathsByPropertyKey;

- (id)init;

@end
