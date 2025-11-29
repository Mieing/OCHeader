@class NSString, FinderHomePageSectionInfo;

@interface WCFinderProfileOverviewSectionInfo : NSObject <PBCoding>

@property (nonatomic) long long secType;
@property (retain, nonatomic) FinderHomePageSectionInfo *sectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_secType;
+ (void)PBArrayAdd_sectionInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
