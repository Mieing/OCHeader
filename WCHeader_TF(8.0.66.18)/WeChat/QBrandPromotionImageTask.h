@class NSURLSessionDataTask, NSMutableSet;

@interface QBrandPromotionImageTask : NSObject

@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (retain, nonatomic) NSMutableSet *imageOwners;

- (id)init;
- (void)addImageOwner:(id)a0;
- (void)removeImageOwner:(id)a0;
- (void).cxx_destruct;

@end
