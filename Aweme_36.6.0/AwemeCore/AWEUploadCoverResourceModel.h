@class NSString;

@interface AWEUploadCoverResourceModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *coverTextResourceId;
@property (copy, nonatomic) NSString *cropedCoverResourceId;
@property (copy, nonatomic) NSString *videoCoverResourceId;
@property (copy, nonatomic) NSString *paymentVideoCoverResourceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
