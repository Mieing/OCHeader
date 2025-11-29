@protocol XMailPrepareBindCgiDelegate;

@interface XMailPrepareBindCgi : XMailBaseCgi

@property (weak, nonatomic) id<XMailPrepareBindCgiDelegate> delegate;

- (id)init;
- (BOOL)startRequestWithDefaultMailAddr:(id)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
