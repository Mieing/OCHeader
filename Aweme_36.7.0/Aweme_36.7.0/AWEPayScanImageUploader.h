@class AWEIMRedPacketUploadImageClient;

@interface AWEPayScanImageUploader : NSObject

@property (retain, nonatomic) AWEIMRedPacketUploadImageClient *client;

- (void)uploadWithImageDataArray:(id)a0 info:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
