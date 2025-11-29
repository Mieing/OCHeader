@protocol IESLiveScreenRecordInterface;

@interface IESLiveScreenRecordActionMethodImpl : IESLiveScreenRecordActionMethod

@property (retain, nonatomic) id<IESLiveScreenRecordInterface> actionCreator;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
