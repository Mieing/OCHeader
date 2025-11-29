@class NSString;

@interface VEABInfo : NSObject

@property (retain, nonatomic) NSString *key;
@property (nonatomic) unsigned long long dataType;
@property (retain, nonatomic) id defaultVal;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long configType;
@property (nonatomic) unsigned long long keySource;

- (id)convertToDic;
- (id)initWithKey:(id)a0 defaultBool:(BOOL)a1 description:(id)a2;
- (id)initWithKey:(id)a0 defaultFloat:(float)a1 description:(id)a2;
- (id)initWithKey:(id)a0 defaultInt:(int)a1 description:(id)a2;
- (id)initWithKey:(id)a0 defaultString:(id)a1 description:(id)a2;
- (void).cxx_destruct;

@end
