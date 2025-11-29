@class NSNumber;

@interface AWELiveHonorInfoModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *honorLevel;
@property (retain, nonatomic) NSNumber *honorScore;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasUnlockedSecondaryBarrage;
- (BOOL)hasUnlockedSecondaryEntryAnimation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDict:(id)a0;

@end
