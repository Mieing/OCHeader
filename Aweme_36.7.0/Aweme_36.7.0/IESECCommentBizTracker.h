@class IESECGoodsCommentContext;

@interface IESECCommentBizTracker : NSObject

@property (weak, nonatomic) IESECGoodsCommentContext *context;

- (id)commentModuleWithDataType:(long long)a0 detailModel:(id)a1;
- (id)isSameCommentWithDetailModel:(id)a0 dataType:(long long)a1;
- (void)trackClickImpression:(id)a0 index:(long long)a1 trackContext:(id)a2 extra:(id)a3;
- (id)bigPicTrackerDic:(BOOL)a0 trackContext:(id)a1;
- (id)commentRankWithDetailModel:(id)a0 index:(unsigned long long)a1 originCommentCount:(unsigned long long)a2;
- (id)commonParamsDic;
- (id)trackTagParamsDic:(id)a0 index:(long long)a1 tagType:(long long)a2 trackContext:(id)a3;
- (void)trackClickImpression:(id)a0 index:(long long)a1 trackContext:(id)a2;
- (void)trackBigPicCommentShow:(id)a0;
- (void)trackCommentContentExit:(BOOL)a0 trackContext:(id)a1;
- (void)trackCommentContentExit:(id)a0;
- (void)trackCommentContentShow:(id)a0;
- (void)trackBigPicSwitchClick:(long long)a0;
- (void)trackBigPicSwitchClick:(long long)a0 trackContext:(id)a1;
- (void)trackClickCommentLike:(BOOL)a0 trackContext:(id)a1;
- (void)trackPostOrderButtonClick:(id)a0;
- (void)trackPostOrderButtonShowOfModel:(id)a0;
- (void)trackCommentTagShow:(id)a0 index:(long long)a1 trackContext:(id)a2;
- (void)trackCommentTagClick:(id)a0 index:(long long)a1 type:(long long)a2 trackContext:(id)a3;
- (void)trackCommentTagAlertClick:(id)a0 index:(long long)a1 type:(long long)a2 clickArea:(id)a3 trackContext:(id)a4;
- (id)mediaModeViewTrackerDic:(id)a0;
- (void).cxx_destruct;

@end
