@class BDImageUploaderClient;

@interface BDWeakImageContainer : NSObject

@property (weak, nonatomic) BDImageUploaderClient *target_client;

- (void).cxx_destruct;

@end
