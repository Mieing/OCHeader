@class NSString, NSDictionary, HTSLiveASTNode, NSMutableArray, NSMutableDictionary;

@interface HTSLiveNFAPattern : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveNFAPattern *cep_next;
@property (retain, nonatomic) NSDictionary *cep_eventDic;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int keyWordType;
@property (retain, nonatomic) HTSLiveASTNode *condition;
@property (nonatomic) BOOL hasCondition;
@property (nonatomic) int withinTime;
@property (copy, nonatomic) NSString *withinType;
@property (nonatomic) int times;
@property (retain, nonatomic) NSMutableArray *eventNamesArray;
@property (readonly, nonatomic) unsigned long long eventNamesArray_Count;
@property (retain, nonatomic) NSMutableDictionary *paramInfos;
@property (readonly, nonatomic) unsigned long long paramInfos_Count;

+ (id)descriptor;

- (int)keyWordType;
- (id)eventNamesArray;

@end
