@class NSArray, NSString;

@interface WSTabInfoList : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *tabs;
@property (nonatomic) unsigned int lastTabsCount;
@property (copy, nonatomic) NSString *lastTabsIdentifier;
@property (nonatomic) long long lastSelectedTabCategory;
@property (readonly, nonatomic) long long lastSelectedFinderEntryType;
@property (nonatomic) long long jumpCategoryInFutrue;
@property (readonly, nonatomic) NSArray *k1kTabs;

+ (id)sharedInstance;

- (id)initWithParams:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)genTabsIdentifier;
- (void)cacheCurrentTabsInfo;
- (long long)topStoriesCategoryIdForTab:(long long)a0;
- (id)tabInfoForCategory:(long long)a0;
- (long long)indexForCategory:(long long)a0;
- (id)tabInfoForReddotPath:(id)a0;
- (id)tabInfoForFinderTabType:(int)a0;
- (BOOL)hasNewlifeTab;
- (BOOL)hasLongVideoTab;
- (void)configureJumpCategory:(int)a0;
- (void).cxx_destruct;

@end
