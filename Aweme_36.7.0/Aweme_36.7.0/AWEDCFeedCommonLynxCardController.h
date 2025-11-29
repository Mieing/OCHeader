@class NSString;

@interface AWEDCFeedCommonLynxCardController : AWEDCFeedBaseController <AWEDCFeedCommonLynxCardControllerProtocol>

@property (nonatomic) long long reqOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionControllerWillEnterWorkingRange:(id)a0;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (void)onLoadMoreListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)customRequestParams:(id)a0 requestInfo:(struct AWEDCFeedListRequestInfo { unsigned long long x0; union { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (BOOL)isSpecialCard:(id)a0;
- (id)classNameWithReferString;

@end
