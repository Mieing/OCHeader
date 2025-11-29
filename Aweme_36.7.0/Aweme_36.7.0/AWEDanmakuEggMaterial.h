@class NSNumber, NSString;

@interface AWEDanmakuEggMaterial : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *activityID;
@property (retain, nonatomic) NSNumber *materialID;
@property (readonly, copy, nonatomic) NSString *materialPath;
@property (readonly, nonatomic) long long materialType;
@property (readonly, nonatomic) double materialRatio;
@property (readonly, nonatomic) NSNumber *probability;
@property (readonly, copy, nonatomic) NSString *materialMd5;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)description;

@end
