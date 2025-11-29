@class NSString, NSMutableArray;

@interface MMHevcHelper : NSObject

@property (retain, nonatomic) NSMutableArray *idKeys;
@property (nonatomic) unsigned int idKeyID;
@property (readonly, copy, nonatomic) NSString *imgUrl;

- (id)initWithIdKeyId:(unsigned int)a0 imgUrl:(id)a1;
- (void)reportIdKeyEvent:(unsigned long long)a0;
- (void)reportIdKeyEvent:(unsigned long long)a0 value:(unsigned int)a1;
- (void)flushIdKeyEvent:(BOOL)a0;
- (void)reportKvStat:(unsigned int)a0 value:(id)a1;
- (void).cxx_destruct;

@end
