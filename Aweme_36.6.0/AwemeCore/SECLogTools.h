@class NSString;
@protocol SECLoggerService;

@interface SECLogTools : NSObject

@property (copy, nonatomic) NSString *tag;
@property (retain, nonatomic) id<SECLoggerService> logger;
@property (nonatomic) BOOL needSample;
@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long sample;

- (void)important:(id)a0;
- (id)tagForLevel:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)error:(id /* block */)a0;
- (id)initWithTag:(id)a0;
- (void)info:(id /* block */)a0;
- (void)warn:(id /* block */)a0;

@end
