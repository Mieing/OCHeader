@class NSString, WCPayBalanceLQTOpenInfo;

@interface WCPayBalanceChargeLQTInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL isLqtUser;
@property (retain, nonatomic) WCPayBalanceLQTOpenInfo *openLqtInfo;
@property (retain, nonatomic) NSString *lqtOperateId;
@property (retain, nonatomic) NSString *lqtTraceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_subTitle;
+ (void)PBArrayAdd_isLqtUser;
+ (void)PBArrayAdd_openLqtInfo;
+ (void)PBArrayAdd_lqtOperateId;
+ (void)PBArrayAdd_lqtTraceInfo;
+ (void)initialize;
+ (id)genFromDict:(id)a0;
+ (id)genFromCache;
+ (void)clearCache;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
