@class NSString, NSArray;

@interface IESECUgCardListResponseParams : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSArray *feeds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)hasMore;

@end
