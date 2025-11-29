@class MMLiveBeautyBadgeItem, NSString, NSArray, MMLiveBeautyBadgeCollection;

@interface MMLiveBeautySuite : NSObject

@property (retain, nonatomic) NSString *suiteId;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *colorHexString;
@property (nonatomic) BOOL applyBlurring;
@property (retain, nonatomic) MMLiveBeautyBadgeItem *badge;
@property (retain, nonatomic) NSArray *itemGroups;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *exclusiveGroups;
@property (retain, nonatomic) MMLiveBeautyBadgeCollection *itemBadges;
@property (retain, nonatomic) NSString *resourcesPath;
@property (nonatomic) unsigned long long order;
@property (readonly, nonatomic) BOOL effective;

+ (id)suiteInJsonDictionary:(id)a0 fromLocalDirectory:(id)a1 badges:(id)a2 isLowSpecDevice:(BOOL)a3;
+ (id)equivalentSuiteIdForLegacyType:(unsigned long long)a0;

- (id)legacySaveKey;
- (void).cxx_destruct;

@end
