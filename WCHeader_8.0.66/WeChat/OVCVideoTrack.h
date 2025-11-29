@class NSString;

@interface OVCVideoTrack : NSObject

@property (readonly, nonatomic) struct SharedPtr<XMFVideoTrack> { struct XMFVideoTrack *_ptr; } backingVideoTrack;
@property (readonly, nonatomic) NSString *codecID;
@property (readonly, nonatomic) NSString *codecProfile;
@property (readonly, nonatomic) NSString *codecLevel;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) NSString *pixelFormatNama;
@property (readonly, nonatomic) NSString *pixelColorTypeName;
@property (readonly, nonatomic) unsigned long long colorPrimaries;
@property (readonly, nonatomic) NSString *colorPrimariesName;
@property (readonly, nonatomic) unsigned long long aspectRatio;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) NSString *frameRateName;
@property (readonly, nonatomic) unsigned long long imagePackingType;
@property (readonly, nonatomic) long long averageBitrate;

- (id)initWithBackingVideoTrack:(const void *)a0;
- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
