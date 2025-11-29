@class NSString;

@interface AWEPOIFeedUgcRecommendDishInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) long long start;
@property (nonatomic) long long end;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithText:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidRange;
- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;

@end
