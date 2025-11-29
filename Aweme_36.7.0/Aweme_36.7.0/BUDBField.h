@class NSString;

@interface BUDBField : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL primary;
@property (nonatomic) BOOL notNull;
@property (readonly, copy, nonatomic) NSString *typeDescription;

+ (id)convertToSqlStringWithFields:(id)a0;

- (id)convertToSqlString;
- (BOOL)hasDefault;
- (id)defaultSqlString;
- (id)_convertType;
- (void).cxx_destruct;

@end
