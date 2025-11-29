@class NSNumber, NSString;

@interface AWEDanmakuPendantMaterial : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *activityID;
@property (retain, nonatomic) NSNumber *materialID;
@property (readonly, copy, nonatomic) NSString *materialPath;
@property (readonly, nonatomic) NSNumber *probability;
@property (readonly, copy, nonatomic) NSString *materialURL;
@property (readonly, nonatomic) double materialRatio;
@property (readonly, copy, nonatomic) NSString *materialMd5;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)description;

@end
