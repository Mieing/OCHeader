@interface IESECWindowSplitBlockGroup : NSObject

@property (copy, nonatomic) id /* block */ halfViewWillOpen;
@property (copy, nonatomic) id /* block */ halfViewWillClose;
@property (copy, nonatomic) id /* block */ halfViewCloseHandler;

- (void).cxx_destruct;

@end
