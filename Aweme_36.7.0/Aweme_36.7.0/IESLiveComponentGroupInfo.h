@class NSArray, NSString;

@interface IESLiveComponentGroupInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL animated;
@property (nonatomic) double animatedDuration;
@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) NSArray *targetContainerTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
