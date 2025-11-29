@class NSString, NSNumber;

@interface ACCEditBeautyEffectCacheItemModel : NSObject

@property (copy, nonatomic) NSString *nodeId;
@property (copy, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSNumber *isSelected;
@property (retain, nonatomic) NSNumber *isApplied;

+ (id)generateCacheModelFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)toDict;

@end
