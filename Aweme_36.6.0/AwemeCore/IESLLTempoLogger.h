@class NSString, IESLLTempoThreadSafeDictionary;
@protocol IESLLTempoLogProviderProtocol;

@interface IESLLTempoLogger : NSObject

@property (retain, nonatomic) id<IESLLTempoLogProviderProtocol> provider;
@property (retain, nonatomic) IESLLTempoThreadSafeDictionary *commonParams;
@property (copy, nonatomic) NSString *defaultEvent;

- (void)updateCommonParams:(id)a0;
- (void)logWithEvent:(id)a0 params:(id)a1;
- (void)logWithTag:(id)a0 errCode:(long long)a1 errMsg:(id)a2;
- (void)logWithErrCode:(long long)a0 errMsg:(id)a1;
- (id)initWithProvider:(id)a0 event:(id)a1 commonParams:(id)a2;
- (void)logWithParams:(id)a0;
- (id)initWithProvider:(id)a0 commonParams:(id)a1;
- (void)logWithError:(id)a0;
- (void).cxx_destruct;

@end
