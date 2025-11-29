@class NSString, NSArray;

@interface IESLiveComponentDynamicLevelCombine : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long belong;
@property (copy, nonatomic) NSString *next;
@property (copy, nonatomic) NSString *previous;
@property (nonatomic) BOOL head;
@property (retain, nonatomic) NSArray *levels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
