@class NSArray, IESECActionDefine, NSString;

@interface IESECBasicElement : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *showEventList;
@property (retain, nonatomic) IESECActionDefine *action;
@property (copy, nonatomic) NSString *statusID;
@property (copy, nonatomic) NSString *currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)showEventListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
