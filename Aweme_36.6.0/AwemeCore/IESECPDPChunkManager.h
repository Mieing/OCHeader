@class NSString, CSPChunkRequestManager;
@protocol IESECPDPChunkDelegate;

@interface IESECPDPChunkManager : NSObject <IESECPDPChunkService, CSPChunkRequestDelegate>

@property (retain, nonatomic) CSPChunkRequestManager *chunkRequestManager;
@property (weak, nonatomic) id<IESECPDPChunkDelegate> delegate;
@property (nonatomic) double ecRequestStart;
@property (nonatomic) double ecRequestEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveJSON:(id)a0;
- (void)chunkRequestDidEndWithCommonResponse:(id)a0 withError:(id)a1 forceCanceled:(BOOL)a2;
- (BOOL)chunkEnable;
- (id)generatePerfDetailMap;
- (void)startNewStreamWithUrlString:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 enableHttpCache:(BOOL)a5 delegate:(id)a6;
- (BOOL)refreshPdpUseChunk;
- (unsigned long long)chunkStatus;
- (void).cxx_destruct;
- (id)init;

@end
