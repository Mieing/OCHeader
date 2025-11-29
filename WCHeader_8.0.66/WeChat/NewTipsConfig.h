@class NSString;

@interface NewTipsConfig : NSObject <PBCoding>

@property (nonatomic) unsigned int tipsId;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *uniqueId;
@property (retain, nonatomic) NSString *filterClassName;
@property (nonatomic) BOOL bShowParentTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_tipsId;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_uniqueId;
+ (void)PBArrayAdd_filterClassName;
+ (void)PBArrayAdd_bShowParentTips;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)generateNewTipsFilter;
- (BOOL)filterTipsWhenReceiveXml:(id)a0;
- (BOOL)canShowTipsWithTipsInfo:(id)a0;
- (void).cxx_destruct;

@end
