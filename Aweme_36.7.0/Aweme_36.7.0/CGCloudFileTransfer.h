@class NSString;
@protocol XPlayCloudFileTransferDelegate;

@interface CGCloudFileTransfer : CGObject <XPlayCloudFileTransferProtocol>

@property (weak, nonatomic) id<XPlayCloudFileTransferDelegate> fileTransferDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

@end
