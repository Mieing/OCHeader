@class NSArray, NSString;

@interface IESECMediaScrollBoxElement : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *mediaList;
@property (nonatomic) long long space;
@property (nonatomic) BOOL isScrollable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
