@class NSString, AWEShareTokenHandlerResponseModel;

@interface AWEShareReflowStrategyGoods : NSObject <AWEShareReflowStrategy>

@property (nonatomic) unsigned long long schemaType;
@property (retain, nonatomic) AWEShareTokenHandlerResponseModel *model;
@property (copy, nonatomic) NSString *longURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 longURL:(id)a1;
- (BOOL)shouldAvoidSamePageWithModel:(id)a0;
- (BOOL)enableTransferDirectly;
- (BOOL)shouldDelayTokenFind;
- (void)transferWithModel:(id)a0 params:(id)a1 longURL:(id)a2 tokenFromType:(long long)a3;
- (void)configReflowCardWithModel:(id)a0 tokenFromType:(long long)a1 trackParams:(id)a2 reportParams:(id)a3 turnToShareBlock:(id /* block */)a4 reshowCardViewBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (void)trackEcomShareReflowRate:(id)a0 trackParams:(id)a1;
- (unsigned long long)tokenTypeToAweChannelType:(long long)a0;
- (id)getEcomShareTrackParamsWithSchema:(id)a0 longDic:(id)a1 eventParams:(id)a2 tokenFromType:(long long)a3;
- (id)ecomShareBackTrackWithEventParams:(id)a0 schema:(id)a1 longDic:(id)a2 tokenFromType:(long long)a3 logInfoMap:(id)a4 extra:(id)a5;
- (id)shareTokenNoteCardView:(id)a0 extraData:(id)a1;
- (id)addEcomShareTrackParams:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)descriptionText;
- (id)tokenType;

@end
