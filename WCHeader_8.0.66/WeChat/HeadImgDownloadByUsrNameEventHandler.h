@interface HeadImgDownloadByUsrNameEventHandler : ProtobufEventHandler

- (void)saveImageData:(id)a0 user:(id)a1 forCategory:(unsigned char)a2;
- (void)OnProtocolResponse:(id)a0 shouldContinue:(BOOL *)a1;

@end
