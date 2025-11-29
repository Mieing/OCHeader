@class NSString, NSMutableArray;

@interface JsonParseMsg : GPBMessage

@property (nonatomic) unsigned int jsonLength;
@property (nonatomic) BOOL hasJsonLength;
@property (nonatomic) unsigned int parseDuration;
@property (nonatomic) BOOL hasParseDuration;
@property (copy, nonatomic) NSString *parseType;
@property (nonatomic) BOOL hasParseType;
@property (nonatomic) unsigned int parseRepeatCount;
@property (nonatomic) BOOL hasParseRepeatCount;
@property (copy, nonatomic) NSString *parseKey;
@property (nonatomic) BOOL hasParseKey;
@property (retain, nonatomic) NSMutableArray *backtraceArray;
@property (readonly, nonatomic) unsigned long long backtraceArray_Count;
@property (copy, nonatomic) NSString *currentThread;
@property (nonatomic) BOOL hasCurrentThread;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) BOOL hasScene;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL hasIsBackground;
@property (nonatomic) unsigned long long currentTime;
@property (nonatomic) BOOL hasCurrentTime;
@property (copy, nonatomic) NSString *jsonMd5;
@property (nonatomic) BOOL hasJsonMd5;
@property (nonatomic) unsigned int cpuDuration;
@property (nonatomic) BOOL hasCpuDuration;
@property (copy, nonatomic) NSString *subParseType;
@property (nonatomic) BOOL hasSubParseType;

+ (id)descriptor;

@end
