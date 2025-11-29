@class WCFinderCommentDetailViewModel;

@interface WCFinderCommentDetailViewReporter : NSObject

@property (retain, nonatomic) WCFinderCommentDetailViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)comment:(id)a0 viewType:(unsigned long long)a1 receiveEvent:(unsigned long long)a2;
- (void)_cgiResportWithEventID:(id)a0 viewID:(id)a1 params:(id)a2;
- (id)_eventIDForEvent:(unsigned long long)a0;
- (id)_viewIDForViewType:(unsigned long long)a0;
- (id)_viewParamWithType:(unsigned long long)a0 comment:(id)a1;
- (void).cxx_destruct;

@end
