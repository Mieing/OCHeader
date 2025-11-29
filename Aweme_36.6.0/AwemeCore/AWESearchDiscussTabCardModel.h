@class NSArray, AWESearchDiscussTabColorModel, NSString;

@interface AWESearchDiscussTabCardModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *tabList;
@property (retain, nonatomic) AWESearchDiscussTabColorModel *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tabListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)colorJSONTransformer;

- (void).cxx_destruct;

@end
