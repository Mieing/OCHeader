@class NSString, NSMutableDictionary, NSLock;

@interface AppMonitorConfigExtraArray : NSObject

@property (retain, nonatomic) NSMutableDictionary *dimensions;
@property (retain, nonatomic) NSMutableDictionary *args;
@property (retain, nonatomic) NSString *sampling;
@property (retain, nonatomic) NSMutableDictionary *dic_dimensions_search;
@property (retain, nonatomic) NSMutableDictionary *dic_arg_search;
@property (retain, nonatomic) NSLock *dimensions_lock;
@property (retain, nonatomic) NSLock *arg_lock;

- (id)setContentWithDic:(id)a0;
- (id)getDimensions:(id)a0;
- (id)getArgs:(id)a0;
- (void)setWithSampling:(id)a0;
- (id)getSampling;
- (void)parseAPIValues:(id)a0 DimeOrArgs:(id)a1 Key:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
