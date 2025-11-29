@class NSData;

@interface BrandFlowListLogic : NSObject

@property (retain, nonatomic) NSData *lastRequestBuffer;
@property (nonatomic) BOOL isFetching;
@property (nonatomic) unsigned int sceneToAppendUrl;
@property (nonatomic) unsigned int subSceneToAppendUrl;

+ (void)sendFeedBackReqWithModel:(id)a0 selectedReasonArr:(id)a1;
+ (void)reportExposeToSvrWithScene:(unsigned int)a0 cellModel:(id)a1 cellPos:(unsigned int)a2;

- (void)dealloc;
- (void)requestRecommendDataWithScene:(unsigned long long)a0 enterScene:(unsigned int)a1 curArrData:(id)a2 completion:(id /* block */)a3;
- (void)handleResp:(id)a0 scene:(int)a1 completion:(id /* block */)a2;
- (void)finallyHandleWithRecommendCard:(id)a0 completion:(id /* block */)a1;
- (id)loadRequestBuffer;
- (id)convertRecommendCardMsg2BrandFlowLisCellModel:(id)a0;
- (void)refreshSceneToAppendUrlWithCurArrData:(id)a0;
- (void).cxx_destruct;

@end
