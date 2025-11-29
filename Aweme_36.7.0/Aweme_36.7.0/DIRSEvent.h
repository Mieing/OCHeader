@class NSString, NSDictionary, DIRSEventOptions, NSNumber;

@interface DIRSEvent : NSObject <IRISEvent, NSCoding>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) double time;
@property (nonatomic) double storedTime;
@property (nonatomic) double batchedTime;
@property (retain, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) NSDictionary *globalProperties;
@property (retain, nonatomic) NSDictionary *commonParameters;
@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSNumber *dbIndex;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *section;
@property (retain, nonatomic) id schemaObject;
@property (nonatomic) unsigned long long schemaDataLength;
@property (retain, nonatomic) DIRSEventOptions *options;
@property (nonatomic) BOOL stained;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *extraInfo;
@property (readonly) long long dataLength;
@property (readonly) NSString *sessionId;
@property (readonly) id objectValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithType:(id)a0 properties:(id)a1;
+ (id)v3UsingKey:(id)a0 properties:(id)a1;

- (void)addCommonParameters:(id)a0;
- (void).cxx_destruct;
- (id)JSONObject;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)unique;

@end
