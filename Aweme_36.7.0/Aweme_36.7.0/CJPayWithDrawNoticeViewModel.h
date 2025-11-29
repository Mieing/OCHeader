@class CJPayBDCreateOrderResponse;

@interface CJPayWithDrawNoticeViewModel : CJPayBaseListViewModel

@property (retain, nonatomic) CJPayBDCreateOrderResponse *response;

+ (id)modelWith:(id)a0;

- (double)getViewHeight;
- (void).cxx_destruct;
- (Class)viewClass;

@end
