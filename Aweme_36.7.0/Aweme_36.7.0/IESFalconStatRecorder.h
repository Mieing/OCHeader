@class NSMutableArray;

@interface IESFalconStatRecorder : NSObject

@property (retain, nonatomic) NSMutableArray *statArray;

+ (void)recordFalconStat:(id)a0;
+ (id)sharedInstance;

- (void)_sendFalconStatIfNeeded;
- (void)_sendFalconStat:(id)a0;
- (id)falconCommonParams;
- (void)_sendFalconStatWithArray:(id)a0 remainTimes:(long long)a1;
- (void)_sendFalconStatWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setup;

@end
