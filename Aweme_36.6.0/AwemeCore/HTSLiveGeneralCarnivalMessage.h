@class NSString, HTSLiveImage, NSMutableDictionary, HTSLiveCommon, NSMutableArray, GPBInt32ObjectDictionary, HTSLiveHighlightAreaPriorityConfig, HTSLiveGeneralCarnivalMessage_SpecialDanmakuPlay, GPBInt64Array;

@interface HTSLiveGeneralCarnivalMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long seqId;
@property (nonatomic) long long userStartTimestampMilliseconds;
@property (nonatomic) long long userStartMilliseconds;
@property (nonatomic) long long duration;
@property (nonatomic) long long minRemainingDuration;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *wordColor;
@property (retain, nonatomic) HTSLiveImage *titleImage;
@property (nonatomic) BOOL hasTitleImage;
@property (nonatomic) long long showWebp;
@property (copy, nonatomic) NSString *preContent;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL countdownExit;
@property (copy, nonatomic) NSString *exitContent;
@property (nonatomic) long long exitCountdownDuration;
@property (nonatomic) BOOL canJump;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long moveSpeed;
@property (retain, nonatomic) GPBInt32ObjectDictionary *danmakuStyleMap;
@property (readonly, nonatomic) unsigned long long danmakuStyleMap_Count;
@property (nonatomic) long long usePrivilegeRegion;
@property (retain, nonatomic) NSMutableArray *eggStyleArray;
@property (readonly, nonatomic) unsigned long long eggStyleArray_Count;
@property (retain, nonatomic) GPBInt64Array *eggShowRangeArray;
@property (readonly, nonatomic) unsigned long long eggShowRangeArray_Count;
@property (nonatomic) long long canOpenContour;
@property (retain, nonatomic) HTSLiveGeneralCarnivalMessage_SpecialDanmakuPlay *specialDanmakuPlay;
@property (nonatomic) BOOL hasSpecialDanmakuPlay;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (retain, nonatomic) HTSLiveHighlightAreaPriorityConfig *highlightAreaPriorityConfig;
@property (nonatomic) BOOL hasHighlightAreaPriorityConfig;

+ (id)descriptor;

@end
