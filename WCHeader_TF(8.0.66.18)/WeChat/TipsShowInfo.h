@class NSString, NSMutableArray, NSArray;

@interface TipsShowInfo : MMObject <PBCoding>

@property (nonatomic) unsigned int tipsId;
@property (nonatomic) unsigned long long tipsShowType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSMutableArray *arrParents;
@property (retain, nonatomic) NSArray *arrShowingTips;
@property (nonatomic) BOOL bHadShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tipsShowType;
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_arrParents;
+ (void)PBArrayAdd_bHadShow;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
