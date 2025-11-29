@class NSString, NSNumber;

@interface AFDRecommendEntranceLabelConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *highFansText;
@property (nonatomic) BOOL canDelayShow;
@property (nonatomic) BOOL hideArrow;
@property (retain, nonatomic) NSNumber *delayShowTime;
@property (retain, nonatomic) NSNumber *topExpand;
@property (retain, nonatomic) NSNumber *leftExpand;
@property (retain, nonatomic) NSNumber *bottomExpand;
@property (retain, nonatomic) NSNumber *rightExpand;
@property (nonatomic) BOOL disableWithFriends;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
