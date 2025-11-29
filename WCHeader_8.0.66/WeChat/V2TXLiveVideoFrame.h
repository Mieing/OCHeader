@class NSData;

@interface V2TXLiveVideoFrame : NSObject

@property (nonatomic) long long pixelFormat;
@property (nonatomic) long long bufferType;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) long long rotation;
@property (nonatomic) unsigned int textureId;

- (id)description;
- (void)dealloc;
- (void).cxx_destruct;

@end
