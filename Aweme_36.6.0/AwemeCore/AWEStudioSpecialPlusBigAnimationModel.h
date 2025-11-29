@class NSString, NSArray;

@interface AWEStudioSpecialPlusBigAnimationModel : AWEBaseApiModel

@property (nonatomic) BOOL enable;
@property (nonatomic) long long showCountEveryday;
@property (nonatomic) long long coldStartDelayShow;
@property (copy, nonatomic) NSString *animationUrl;
@property (nonatomic) long long staticImgDuration;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long version;
@property (nonatomic) long long maxSkipTimes;
@property (nonatomic) long long suppressionDays;
@property (nonatomic) BOOL forbidActivity;
@property (retain, nonatomic) NSArray *activityValidTimes;
@property (nonatomic) long long showCountActivityDuration;
@property (nonatomic) BOOL forbidRandomSticker;
@property (copy, nonatomic) NSString *staticImgUrl;
@property (retain, nonatomic) NSArray *randomStickerIds;
@property (copy, nonatomic) NSString *staticStickerId;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
