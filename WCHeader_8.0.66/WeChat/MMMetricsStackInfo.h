@class NSString;

@interface MMMetricsStackInfo : NSObject {
    struct MatrixStackInfo { unsigned int x0; unsigned long long x1; unsigned long long x2[100]; } *m_info;
    NSString *m_symbolNames;
}

@property (readonly, nonatomic) unsigned long long stackHash;

+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)stackHash;
+ (const void *)__wcdb_synthesize_0:(void *)a0;
+ (id)swift_stackHash;
+ (const void *)stackFrames;
+ (const void *)__wcdb_synthesize_1:(void *)a0;
+ (id)swift_stackFrames;
+ (const void *)symbolNames;
+ (const void *)__wcdb_synthesize_2:(void *)a0;
+ (id)swift_symbolNames;
+ (void)__wcdb_column_constraint_3:(void *)a0;
+ (id)generateOfflineStackReportItems:(id)a0;

- (id)init;
- (id)initWithStackInfo:(struct MatrixStackInfo { unsigned int x0; unsigned long long x1; unsigned long long x2[100]; } *)a0;
- (void)dealloc;
- (void)setStackHash:(unsigned long long)a0;
- (id)stackFrames;
- (void)setStackFrames:(id)a0;
- (id)symbolNames;
- (void)setSymbolNames:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)generateStackReportItem;
- (id)generateOfflineStackReportItem;
- (void).cxx_destruct;

@end
