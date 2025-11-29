@class NSString, BDWebImageCloudConfig;

@interface BDWebImageCloudData : NSObject <BDModelCustom>

@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) BDWebImageCloudConfig *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
