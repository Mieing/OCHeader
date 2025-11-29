@class IESLLGoodsDetailPageContext, NSMutableDictionary;

@interface IESLLPOIGoodsDetailExceptionMonitor : NSObject

@property (weak, nonatomic) IESLLGoodsDetailPageContext *context;
@property (retain, nonatomic) NSMutableDictionary *commonParams;
@property (retain, nonatomic) NSMutableDictionary *commonNetworkParams;
@property (nonatomic) BOOL closeSlardarMonitor;

- (void)recordMainExceptionWithEvent:(id)a0 error:(id)a1 params:(id)a2;
- (void)updateAfterInfoRequestWithParams:(id)a0 response:(id)a1 error:(id)a2;
- (void)recordOtherRequstExceptionWithPath:(id)a0 params:(id)a1 response:(id)a2 error:(id)a3;
- (void)recordMainExceptionWithEvent:(id)a0;
- (void)updateDetailEnterPage;
- (void)reporWithParams:(id)a0 event:(id)a1 fromRequest:(BOOL)a2;
- (void)recordMainExceptionWithEvent:(id)a0 error:(id)a1;
- (void)reportExceptionToHMDWithParams:(id)a0 event:(id)a1 fromRequest:(BOOL)a2;
- (void)reportAlogAndTeaWithParams:(id)a0 event:(id)a1;
- (void).cxx_destruct;
- (void)refresh;
- (id)initWithContext:(id)a0;

@end
