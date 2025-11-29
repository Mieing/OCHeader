@class NSString;

@interface IESECUgCardListRequestParams : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long pageNum;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *cursor;
@property (copy, nonatomic) NSString *filters;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *productId;
@property (copy, nonatomic) NSString *forceIds;
@property (copy, nonatomic) NSString *first_category_id;
@property (copy, nonatomic) NSString *leaf_category_id;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
