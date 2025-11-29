@class NSString;

@interface WXVcodec2EncFactory : NSObject <TAVSourceSoftEncoderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void *)createHEVCEncoder;
- (void)destroyHEVCEncoder:(void *)a0;

@end
