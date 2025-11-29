@class NSString, NSArray, NSDictionary;

@interface ACCRecordPropRankPitayaRes : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) BOOL isRerank;
@property (readonly, copy, nonatomic) NSString *curPropId;
@property (readonly, copy, nonatomic) NSArray *topkProps;
@property (readonly, copy, nonatomic) NSArray *holdPropList;
@property (readonly, copy, nonatomic) NSArray *p2insert;
@property (readonly, nonatomic) long long ctype;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
