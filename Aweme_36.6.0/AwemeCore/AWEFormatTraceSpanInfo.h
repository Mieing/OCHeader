@class NSString, NSMutableDictionary;

@interface AWEFormatTraceSpanInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *extraParams;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) BOOL isFinished;

- (id)getExtraParams;
- (void)resetSpan;
- (void)appendExtraParams:(id)a0;
- (BOOL)valid;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;

@end
