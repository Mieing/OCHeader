@class NSArray;

@interface OMJCamTemplateInfo : NSObject

@property (readonly, nonatomic) BOOL isUseFrontCamera;
@property (readonly, nonatomic) BOOL isOSTEnabled;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } minRecordingDuration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxRecordingDuration;
@property (readonly, nonatomic) unsigned long long supportedImportedAssetCount;
@property (readonly, nonatomic) BOOL hasAIGCFeature;
@property (readonly, nonatomic) BOOL isAsyncAIGCEnabled;
@property (readonly, nonatomic) BOOL hasARFeature;
@property (readonly, nonatomic) BOOL isStaticContentTemplate;
@property (readonly, nonatomic) NSArray *musicInfos;

- (id)initWithBackingTemplateInfo:(struct XMJCamTemplateInfo { BOOL x0; BOOL x1; struct XTMTime { long long x0; unsigned int x1; } x2; struct XTMTime { long long x0; unsigned int x1; } x3; unsigned int x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; struct vector<std::shared_ptr<XMJMusicInfo>, std::allocator<std::shared_ptr<XMJMusicInfo>>> { void *x0; void *x1; struct __compressed_pair<std::shared_ptr<XMJMusicInfo> *, std::allocator<std::shared_ptr<XMJMusicInfo>>> { void *x0; } x2; } x9; })a0;
- (void).cxx_destruct;

@end
