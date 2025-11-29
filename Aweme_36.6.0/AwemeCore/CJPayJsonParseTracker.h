@class NSMutableDictionary;

@interface CJPayJsonParseTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *classParseNumDic;
@property (retain, nonatomic) NSMutableDictionary *classParseTimeDic;
@property (retain, nonatomic) NSMutableDictionary *classSizeDic;

+ (id)sharedInstance;

- (void)recordParseProcessWithClassName:(id)a0 costTime:(double)a1 modelDic:(id)a2;
- (void)p_calculateSizeOfDic:(id)a0 completion:(id /* block */)a1;
- (void)syncModelParseTime;
- (void).cxx_destruct;

@end
