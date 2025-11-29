@class NSString;

@interface WCSpecialPVPageConfig : MMObject <PBCoding>

@property (retain, nonatomic) NSString *prePageID;
@property (retain, nonatomic) NSString *pageID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_prePageID;
+ (void)PBArrayAdd_pageID;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
