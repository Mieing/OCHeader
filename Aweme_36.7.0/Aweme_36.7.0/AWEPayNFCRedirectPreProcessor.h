@class NSMutableDictionary;

@interface AWEPayNFCRedirectPreProcessor : NSObject

@property (retain, nonatomic) NSMutableDictionary *taskTable;

+ (id)shareProcessor;

- (void)handleBusinessPreProcessor:(id)a0 params:(id)a1 isColdLaunch:(BOOL)a2;
- (void)registerBusinessPreTask;
- (id)getBizPathPrefix:(id)a0;
- (void).cxx_destruct;

@end
