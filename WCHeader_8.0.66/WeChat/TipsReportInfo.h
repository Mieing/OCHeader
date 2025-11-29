@class NSString;

@interface TipsReportInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long filteredType;
@property (nonatomic) unsigned long long reportStayTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_filteredType;
+ (void)PBArrayAdd_reportStayTime;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
