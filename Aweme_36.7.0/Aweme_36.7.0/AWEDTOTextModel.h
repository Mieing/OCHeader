@class NSString, NSArray;

@interface AWEDTOTextModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long layer;
@property (copy, nonatomic) NSArray *words;
@property (nonatomic) long long stickerId;
@property (copy, nonatomic) NSArray *highlightList;
@property (copy, nonatomic) NSString *captionId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wordsJSONTransformer;
+ (id)highlightListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
