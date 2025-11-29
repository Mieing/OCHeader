@class NSString, OVCAudioTrack, OVCVideoTrack, OVCImageTrack;

@interface OVCMediaFile : NSObject

@property (readonly, nonatomic) struct SharedPtr<XMFMediaFile> { struct XMFMediaFile *_ptr; } backingMediaFile;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned long long containerType;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } startTime;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *creationTime;
@property (readonly, nonatomic) NSString *location;
@property (readonly, nonatomic) OVCAudioTrack *audioTrack;
@property (readonly, nonatomic) OVCVideoTrack *videoTrack;
@property (readonly, nonatomic) OVCImageTrack *imageTrack;

- (id)initWithBackingMediaFile:(const void *)a0 filePath:(id)a1 localIdentifier:(id)a2;
- (id)initWithFilePath:(id)a0;
- (id)initWithFilePath:(id)a0 localIdentifier:(id)a1;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
