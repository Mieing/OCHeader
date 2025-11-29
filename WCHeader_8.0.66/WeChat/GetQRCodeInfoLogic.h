@protocol GetQRCodeInfoLogicDelegate;

@interface GetQRCodeInfoLogic : NSObject <PBMessageObserverDelegate>

@property (nonatomic) float cgiTimeout;
@property (weak, nonatomic) id<GetQRCodeInfoLogicDelegate> delegate;

- (void)getQRCodeInfo:(unsigned int)a0 codeStr:(id)a1 session:(id)a2;
- (void)getQRCodeInfo:(unsigned int)a0 codeStrArray:(id)a1 sessionArray:(id)a2;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void)handleQRCodeInfoResp:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
