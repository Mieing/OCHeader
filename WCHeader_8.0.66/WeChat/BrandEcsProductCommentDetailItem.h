@class NSString, BrandEcsProductShareWeappItem;

@interface BrandEcsProductCommentDetailItem : NSObject

@property (retain, nonatomic) BrandEcsProductShareWeappItem *fakeNativeWeAppItem;
@property (copy, nonatomic) NSString *messageExtraData;

+ (id)makeWithFakeNativeWeAppItem:(id)a0 messageExtraData:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
