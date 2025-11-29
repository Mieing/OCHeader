@class NSString;
@protocol TTVideoEngineNetClient;

@interface TTVideoEngineContentDataReporter : NSObject

@property (retain, nonatomic) id<TTVideoEngineNetClient> mNetClient;
@property (nonatomic) BOOL mCanceled;
@property (copy, nonatomic) NSString *mInitialUrl;

+ (id)instance;

- (void)setInitialUrl:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)startTask:(id)a0;

@end
