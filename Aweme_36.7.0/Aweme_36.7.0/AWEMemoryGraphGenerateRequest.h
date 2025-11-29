@class NSString, NSNumber, NSMutableDictionary;

@interface AWEMemoryGraphGenerateRequest : NSObject

@property (copy, nonatomic) NSString *path;
@property (retain, nonatomic) NSNumber *maxMemoryUsage;
@property (retain, nonatomic) NSNumber *maxFileSize;
@property (nonatomic) BOOL useNaiveVersion;
@property (copy, nonatomic) id /* block */ checker;
@property (retain, nonatomic) NSMutableDictionary *jsonOutput;
@property (nonatomic) BOOL doCppSymbolic;
@property (nonatomic) unsigned long long memoryUsageBeforeSuspend;
@property (nonatomic) unsigned long long timeOutDuration;
@property (copy, nonatomic) id /* block */ threadParser;
@property (copy, nonatomic) id /* block */ threadParserNew;
@property (retain, nonatomic) NSMutableDictionary *extraConfiguration;

- (void)dealloc;

@end
