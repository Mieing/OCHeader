@class NSString, NSData, NSDate;

@interface AMapLogMessage : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *ignoreRule;
@property (readonly, nonatomic) NSString *rawStr;
@property (readonly, nonatomic) NSData *rawData;
@property (readonly, nonatomic) NSData *encryptData;
@property (readonly, nonatomic) NSString *encrytStr;
@property (readonly, nonatomic) NSString *logMessage;
@property (copy, nonatomic) NSString *session;
@property (copy, nonatomic) NSString *net;
@property (nonatomic) BOOL backGround;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) unsigned long long level;
@property (readonly, copy, nonatomic) NSString *levelStr;
@property (readonly, copy, nonatomic) NSString *file;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, copy, nonatomic) NSString *function;
@property (readonly, nonatomic) unsigned long long line;
@property (readonly, copy, nonatomic) NSString *tag;
@property (readonly, copy, nonatomic) NSString *timestamp;
@property (readonly, copy, nonatomic) NSString *threadID;
@property (readonly, copy, nonatomic) NSString *threadName;
@property (readonly, copy, nonatomic) NSString *queueLabel;
@property (readonly, copy, nonatomic) NSString *componentName;
@property (readonly, copy, nonatomic) NSString *componentProduct;
@property (readonly, copy, nonatomic) NSString *componentVersion;
@property (readonly, nonatomic) NSString *completeInformation;
@property (readonly, nonatomic) NSDate *time;

+ (id)logStringWithDictionary:(id)a0 encrypted:(BOOL)a1;

- (id)initWithMessage:(id)a0 component:(id)a1 level:(unsigned long long)a2 file:(id)a3 function:(id)a4 line:(unsigned long long)a5 session:(id)a6 date:(id)a7;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyObject:(id)a0;

@end
