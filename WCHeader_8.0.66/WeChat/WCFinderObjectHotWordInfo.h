@class NSString, FinderObjectHotWordInfo;

@interface WCFinderObjectHotWordInfo : NSObject <WCTColumnCoding, PBCoding>

@property (retain, nonatomic) FinderObjectHotWordInfo *hotWordInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;
+ (void)PBArrayAdd_hotWordInfo;
+ (void)initialize;

- (id)archivedWCTValue;
- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
