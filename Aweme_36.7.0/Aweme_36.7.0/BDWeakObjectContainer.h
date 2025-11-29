@class BDObjectUploaderClient;

@interface BDWeakObjectContainer : NSObject

@property (weak, nonatomic) BDObjectUploaderClient *target_client;

- (void).cxx_destruct;

@end
