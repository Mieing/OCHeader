@class NSString;

@interface CGStreamService : CGObject <XPlayStreamService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)shouldLoadByItem:(id)a0 cloudPlayer:(id)a1;

- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (int)publishVideoStream;
- (int)unpublishVideoStream;
- (int)pushExternalVideoFrame:(id)a0;
- (int)setVideoEncoderConfig:(id)a0;

@end
