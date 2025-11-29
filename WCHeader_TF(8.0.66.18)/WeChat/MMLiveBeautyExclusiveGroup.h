@class NSString, NSDictionary, NSArray, MMLiveBeautyItem;

@interface MMLiveBeautyExclusiveGroup : NSObject

@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSDictionary *exclusiveItems;
@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) MMLiveBeautyItem *activeItem;

+ (id)exclusiveGroupInJsonDictionary:(id)a0 suiteId:(id)a1 suiteItems:(id)a2;

- (BOOL)containsItemWithId:(id)a0;
- (void).cxx_destruct;

@end
