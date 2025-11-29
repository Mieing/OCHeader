@class HTSLiveText, NSString, NSMutableDictionary, HTSLiveSameTypePKStrategy, HTSLiveHighlightAreaPriorityConfig, NSMutableArray;

@interface HTSLiveHighlightAreaContainer : IESLivePBBaseMessage

@property (nonatomic) long long tailInteractType;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *bizScene;
@property (retain, nonatomic) HTSLiveText *displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) long long sceneId;
@property (retain, nonatomic) NSMutableDictionary *extra;
@property (readonly, nonatomic) unsigned long long extra_Count;
@property (retain, nonatomic) HTSLiveHighlightAreaPriorityConfig *areaPriorityConfig;
@property (nonatomic) BOOL hasAreaPriorityConfig;
@property (nonatomic) long long showDurationMs;
@property (retain, nonatomic) NSMutableArray *triggersArray;
@property (readonly, nonatomic) unsigned long long triggersArray_Count;
@property (nonatomic) long long animType;
@property (retain, nonatomic) HTSLiveSameTypePKStrategy *sameTypePkStrategy;
@property (nonatomic) BOOL hasSameTypePkStrategy;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long operate;

+ (id)descriptor;

@end
