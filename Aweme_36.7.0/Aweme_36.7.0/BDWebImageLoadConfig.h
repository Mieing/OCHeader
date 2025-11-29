@class NSString;

@interface BDWebImageLoadConfig : NSObject <BDModelCustom>

@property (nonatomic) unsigned long long failedRetryCount;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) unsigned long long maxDownloadTaskCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
