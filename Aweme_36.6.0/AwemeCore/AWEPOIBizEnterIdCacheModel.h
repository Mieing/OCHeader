@class NSString, NSDictionary;

@interface AWEPOIBizEnterIdCacheModel : NSObject

@property (copy, nonatomic) NSString *targetParamKey;
@property (copy, nonatomic) NSDictionary *bcmItem;
@property (nonatomic) BOOL isFrozen;

- (id)initWithTargetParamKey:(id)a0 bcmItem:(id)a1;
- (void).cxx_destruct;

@end
