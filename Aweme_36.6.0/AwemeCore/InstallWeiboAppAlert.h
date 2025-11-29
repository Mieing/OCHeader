@class WBDataTransferObject;

@interface InstallWeiboAppAlert : NSObject

@property (retain, nonatomic) WBDataTransferObject *transferObject;

- (void)alertWithTransferObject:(id)a0;
- (void)alertWithTransferObject:(id)a0 isUpdate:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
