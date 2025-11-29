@protocol IESLivePKProvider;

@interface IESLivePKLogHandler : NSObject

@property (weak, nonatomic) id<IESLivePKProvider> pkProvider;
@property (nonatomic) BOOL isAnchor;

- (id)initWithDIContext:(id)a0;
- (void)logInfoWithCategory:(unsigned long long)a0 event:(id)a1 extra:(id)a2;
- (void)logErrorWithCategory:(unsigned long long)a0 event:(id)a1 extra:(id)a2;
- (void)logWithLevel:(unsigned long long)a0 category:(unsigned long long)a1 event:(id)a2 extra:(id)a3;
- (id)rtcStatusStr;
- (id)completeAlogWithCategory:(unsigned long long)a0 event:(id)a1;
- (void).cxx_destruct;

@end
