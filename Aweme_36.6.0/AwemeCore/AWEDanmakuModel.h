@class NSString, NSArray, AWEDanmakuExtraModel;

@interface AWEDanmakuModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *danmakuID;
@property (nonatomic) double offsetTime;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) double score;
@property (nonatomic) long long danmakuStatus;
@property (nonatomic) long long digged;
@property (nonatomic) long long diggCount;
@property (nonatomic) BOOL showDigg;
@property (nonatomic) long long danmakuScene;
@property (nonatomic) long long sceneType;
@property (nonatomic) unsigned long long danmakuTypeBits;
@property (retain, nonatomic) AWEDanmakuExtraModel *extra;
@property (nonatomic) BOOL hasEmoji;
@property (nonatomic) long long dislikeType;
@property (retain, nonatomic) NSArray *danmakuLogos;
@property (nonatomic) BOOL isAd;

+ (id)propertyToModelClassInArrayMap;
+ (id)extraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
