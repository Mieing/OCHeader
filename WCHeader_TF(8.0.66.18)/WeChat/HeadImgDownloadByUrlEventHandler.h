@interface HeadImgDownloadByUrlEventHandler : ProtobufEventHandler

+ (void)saveImageWithData:(id)a0 request:(id)a1;

- (void)saveImageDataForCGIWrap:(id)a0;
- (id)getSaveDataFromCGIWrap:(id)a0;
- (void)OnProtocolConnectFail:(id)a0;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;

@end
