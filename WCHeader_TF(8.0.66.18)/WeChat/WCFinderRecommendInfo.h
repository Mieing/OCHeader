@class NSString, FinderFlowCardRecommendReason, DynamicReason, FinderObjectWordingInfo;

@interface WCFinderRecommendInfo : NSObject <WCTTableCoding>

@property (copy, nonatomic) NSString *tid;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) int recommendType;
@property (copy, nonatomic) NSString *recommendReason;
@property (nonatomic) unsigned long long orgRecommendType;
@property (retain, nonatomic) FinderFlowCardRecommendReason *flowCardRecommandReasonInfo;
@property (retain, nonatomic) NSString *flowDescTitle;
@property (retain, nonatomic) NSString *innerRecommendReason;
@property (retain, nonatomic) DynamicReason *dynamicReason;
@property (retain, nonatomic) FinderObjectWordingInfo *asyncReasonInfo;
@property (nonatomic) long long lastInsertedRowID;
@property (nonatomic) BOOL isAutoIncrement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_tid;
+ (const void *)recommendType;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_recommendType;
+ (const void *)recommendReason;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_recommendReason;
+ (const void *)orgRecommendType;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (id)swift_orgRecommendType;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_4:(void *)a0;
+ (id)swift_scene;
+ (const void *)flowCardRecommandReasonInfo;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (id)swift_flowCardRecommandReasonInfo;
+ (const void *)flowDescTitle;
+ (const void *)__wcdb_synthesize_6:(void *)a0;
+ (id)swift_flowDescTitle;
+ (const void *)dynamicReason;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (id)swift_dynamicReason;
+ (const void *)innerRecommendReason;
+ (const void *)__wcdb_synthesize_8:(void *)a0;
+ (id)swift_innerRecommendReason;
+ (const void *)asyncReasonInfo;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_asyncReasonInfo;
+ (void)__wcdb_table_constraint_10:(void *)a0;
+ (void)__wcdb_table_constraint_11:(void *)a0;

- (void).cxx_destruct;

@end
