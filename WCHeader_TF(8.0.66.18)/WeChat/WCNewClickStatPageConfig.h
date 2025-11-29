@class NSString;

@interface WCNewClickStatPageConfig : MMObject <PBCoding>

@property (retain, nonatomic) NSString *pageID;
@property (nonatomic) BOOL bNeedAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_pageID;
+ (void)PBArrayAdd_bNeedAction;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
