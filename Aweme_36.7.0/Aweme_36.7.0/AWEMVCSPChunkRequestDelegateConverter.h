@class NSString, CSPChunkRequestManager;
@protocol AWEMVCSPChunkRequestDelegate;

@interface AWEMVCSPChunkRequestDelegateConverter : NSObject <CSPChunkRequestDelegate>

@property (weak, nonatomic) CSPChunkRequestManager *request;
@property (nonatomic) long long chunkIndex;
@property (weak, nonatomic) id<AWEMVCSPChunkRequestDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (void)clearBeforeNewLink;
- (void)didReceiveRawData:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;

@end
