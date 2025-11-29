@class NSString;

@interface OVCImageTrack : NSObject

@property (readonly, nonatomic) struct SharedPtr<XMFImageTrack> { struct XMFImageTrack *_ptr; } backingImageTrack;
@property (readonly, nonatomic) NSString *codecIDName;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) NSString *pixelFormatName;
@property (readonly, nonatomic) unsigned long long aspectRatio;
@property (readonly, nonatomic) unsigned long long orientation;

- (id)initWithBackingImageTrack:(const void *)a0;
- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
