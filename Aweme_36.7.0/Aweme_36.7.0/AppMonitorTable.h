@class NSString;

@interface AppMonitorTable : NSObject

@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSString *tableName;

+ (BOOL)validParamsWithModule:(id)a0 monitorPoint:(id)a1;
+ (BOOL)validParamsWithColumns:(id)a0 rows:(id)a1;
+ (BOOL)isRegisteredWithModule:(id)a0 monitorPoint:(id)a1;
+ (BOOL)validateDiemension:(id)a0 forModule:(id)a1 monitorPoint:(id)a2;
+ (BOOL)validateMeasure:(id)a0 forModule:(id)a1 monitorPoint:(id)a2;
+ (id)formatNumber:(id)a0;
+ (void)registerWithModule:(id)a0 monitorPoint:(id)a1 columns:(id)a2 rows:(id)a3 aggregate:(BOOL)a4;
+ (void)addConstraintWithModule:(id)a0 monitorPoint:(id)a1 name:(id)a2 min:(double)a3 max:(double)a4 defaultValue:(double)a5;
+ (BOOL)commitWithModule:(id)a0 monitorPoint:(id)a1 columns:(id)a2 rows:(id)a3;
+ (id)monitorForScheme:(id)a0 tableName:(id)a1;

- (BOOL)isDimensionKey:(id)a0;
- (BOOL)isMeasureKey:(id)a0;
- (void)registerTableWithRows:(id)a0 columns:(id)a1 aggregate:(BOOL)a2;
- (void)addConstraintWithName:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 defaultValue:(id)a2;
- (void)addConstraintWithName:(id)a0 min:(double)a1 max:(double)a2 defaultValue:(double)a3;
- (BOOL)updateTableForColumns:(id)a0 rows:(id)a1;
- (BOOL)updateTableWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
