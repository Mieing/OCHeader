@class NSString, NSArray;

@interface MJShootingTemplateTabInfo : NSObject <PBCoding, NSCopying>

@property (nonatomic) unsigned long long tabId;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSArray *tags;
@property (nonatomic) unsigned int tabType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tabId;
+ (void)PBArrayAdd_tabName;
+ (void)PBArrayAdd_tags;
+ (void)PBArrayAdd_tabType;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithTemplateTab:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
