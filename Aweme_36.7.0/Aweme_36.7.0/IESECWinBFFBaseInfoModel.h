@class NSString, NSArray;

@interface IESECWinBFFBaseInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *commonPassThrough;
@property (nonatomic) unsigned long long layout;
@property (nonatomic) BOOL hideEmptyStatus;
@property (copy, nonatomic) NSString *selectCategory;
@property (copy, nonatomic) NSString *selectSubCategory;
@property (copy, nonatomic) NSString *nextApi;
@property (copy, nonatomic) NSArray *dynamicViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dynamicViewsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
