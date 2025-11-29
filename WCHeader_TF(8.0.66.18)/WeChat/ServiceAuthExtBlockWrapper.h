@interface ServiceAuthExtBlockWrapper : NSObject

@property (copy, nonatomic) id /* block */ onOpenServiceBlock;
@property (copy, nonatomic) id /* block */ onCloseServiceBlock;
@property (copy, nonatomic) id /* block */ onCancelServiceAuthBlock;

- (void).cxx_destruct;

@end
