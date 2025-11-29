@class HTSLiveText, NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveSunDailyRankMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *afterContent;
@property (nonatomic) long long messageType;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *style;
@property (retain, nonatomic) HTSLiveText *afterDisplayText;
@property (nonatomic) BOOL hasAfterDisplayText;
@property (nonatomic) long long rank;
@property (copy, nonatomic) NSString *richContent;
@property (copy, nonatomic) NSString *userSideContent;
@property (nonatomic) long long contentType;
@property (copy, nonatomic) NSString *cityCode;
@property (nonatomic) int rankStage;
@property (retain, nonatomic) NSMutableArray *ranksArray;
@property (readonly, nonatomic) unsigned long long ranksArray_Count;
@property (nonatomic) long long beginTime;
@property (nonatomic) long long deltaTime;
@property (retain, nonatomic) HTSLiveText *entranceAppearingText;
@property (nonatomic) BOOL hasEntranceAppearingText;
@property (retain, nonatomic) HTSLiveText *displayTextV2;
@property (nonatomic) BOOL hasDisplayTextV2;
@property (retain, nonatomic) HTSLiveText *afterDisplayTextV2;
@property (nonatomic) BOOL hasAfterDisplayTextV2;
@property (nonatomic) long long durationV2;

+ (id)descriptor;

@end
