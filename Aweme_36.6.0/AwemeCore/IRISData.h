@class NSArray, NSDictionary, NSString;

@interface IRISData : NSObject

@property (class, readonly) NSArray *knownSessionDataTypes;
@property (class, readonly) NSArray *knownBasicDataTypes;

@property (nonatomic) unsigned long long dataLength;
@property (retain, nonatomic) NSDictionary *dataObject;
@property (nonatomic) unsigned long long dataLength;
@property (retain, nonatomic) id dataObject;
@property (copy, nonatomic) NSString *dataType;
@property (nonatomic) long long mechanismLevel;
@property (copy, nonatomic) NSString *uniqueKey;
@property (copy, nonatomic) NSDictionary *basicParameters;
@property (copy, nonatomic) NSDictionary *globalParameters;
@property (copy, nonatomic) NSDictionary *user;
@property (copy, nonatomic) NSString *abtesting;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long time;
@property (nonatomic) long long dataIndex;
@property (nonatomic) long long dbIndex;
@property (copy, nonatomic) NSDictionary *commonParameters;
@property (nonatomic) BOOL isRealtime;

+ (id)dataWithType:(id)a0;
+ (id)dataWithKey:(id)a0 parameters:(id)a1;
+ (id)commonParameterKeys;
+ (id)v1CoreParameterKeys;

- (long long)encType;
- (id)initWithJSONData:(id)a0 forType:(id)a1;
- (void)priority_apply:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (id)serializedData;
- (id)init;

@end
