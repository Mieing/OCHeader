@class NSString, NSDictionary, TIMXSDKInstance, NSDate;

@interface TIMXConversationSettingsInfoORM : TIMXBaseORM <WCTTableCoding, IESIMSDKBaseConversationSettingsInfoModel, TIMXConversationSettingsInfoModelProtocol> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSDictionary *extDictionary;
@property (nonatomic) BOOL muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *belongingConversationIdentifier;
@property (nonatomic) long long infoVersion;
@property (nonatomic) BOOL shouldStickOnTop;
@property (retain, nonatomic) NSDate *stickOnTopTime;
@property (nonatomic) BOOL isFavorited;
@property (retain, nonatomic) NSDate *favoriteTime;
@property (nonatomic) BOOL muted;
@property (retain, nonatomic) NSString *ext;
@property (retain, nonatomic) NSDictionary *extDictionary;
@property (retain, nonatomic) NSDictionary *dbExtDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)belongingConversationIdentifier;
+ (const void *)favoriteTime;
+ (id)__wcdbtyper;
+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)__wcdb_synthesize_3:(void *)a0;
+ (const void *)objectRelationalMapping;
+ (id)allBridgeProperties;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (const void *)ss_ext;
+ (const void *)__wcdb_synthesize_5:(void *)a0;
+ (const void *)__wcdb_synthesize_7:(void *)a0;
+ (const void *)__wcdb_synthesize_9:(void *)a0;
+ (id)swift_ss_ext;
+ (const void *)__wcdb_synthesize_11:(void *)a0;
+ (const void *)__wcdb_synthesize_13:(void *)a0;
+ (const void *)__wcdb_synthesize_15:(void *)a0;
+ (void)__wcdb_column_constraint_17:(void *)a0;
+ (void)__wcdb_column_constraint_19:(void *)a0;
+ (const void *)ss_belongingConversationIdentifier;
+ (id)swift_ss_belongingConversationIdentifier;
+ (const void *)infoVersion;
+ (const void *)ss_infoVersion;
+ (id)swift_ss_infoVersion;
+ (const void *)shouldStickOnTop;
+ (const void *)ss_shouldStickOnTop;
+ (const void *)ss_stickOnTopTime;
+ (const void *)ss_isFavorited;
+ (const void *)ss_favoriteTime;
+ (const void *)ss_muted;
+ (id)swift_ss_shouldStickOnTop;
+ (const void *)stickOnTopTime;
+ (id)swift_ss_stickOnTopTime;
+ (id)swift_ss_isFavorited;
+ (id)swift_ss_favoriteTime;
+ (id)swift_ss_muted;
+ (const void *)muted;
+ (const void *)allProperties;
+ (const void *)isFavorited;
+ (const void *)ext;

- (void)setupPropertyWithPBModel:(id)a0;
- (void)setupPropertyWithPBModel:(id)a0 isStranger:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
