@class LVExtraInfo, NSString, LVMutableConfig, LVKeyframePool, LVGroups, LVCover, LVPayloadPool, NSArray, LVPlatform, LVCanvasConfig, LVDraftConfig;

@interface LVMediaDraft : NSObject <LVCopying> {
    struct shared_ptr<CutSame::TemplateModel> { struct TemplateModel *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (readonly, copy, nonatomic) NSString *editTypeString;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (retain, nonatomic) LVMutableConfig *mutableConfig;
@property (nonatomic) unsigned long long alignMode;
@property (retain, nonatomic) LVCanvasConfig *canvasConfig;
@property (retain, nonatomic) LVDraftConfig *config;
@property (retain, nonatomic) LVCover *cover;
@property (nonatomic) double createAt;
@property (nonatomic) long long durationMilliSeconds;
@property (retain, nonatomic) LVExtraInfo *extraInfo;
@property (retain, nonatomic) LVGroups *groupContainer;
@property (copy, nonatomic) NSString *draftID;
@property (retain, nonatomic) LVKeyframePool *keyframes;
@property (retain, nonatomic) LVPayloadPool *payloadPool;
@property (retain, nonatomic) LVMutableConfig *mutableConfigPrivate;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *draftVersion;
@property (retain, nonatomic) LVPlatform *platform;
@property (copy, nonatomic) NSArray *relationships;
@property (copy, nonatomic) NSArray *tracks;
@property (nonatomic) double updateAt;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *rootPath;

+ (long long)defaultVersion;

- (id)initWithCPPModel:(struct shared_ptr<CutSame::TemplateModel> { struct TemplateModel *x0; struct __shared_weak_count *x1; })a0;
- (id)supportPlatforms;
- (id)initWithDraftID:(id)a0;
- (unsigned long long)supportPlatform;
- (id)segmentsWithTrackType:(unsigned long long)a0;
- (id)segmentWithSegmentID:(id)a0 trackType:(unsigned long long)a1;
- (struct shared_ptr<CutSame::TemplateModel> { struct TemplateModel *x0; struct __shared_weak_count *x1; })cppmodel;
- (id)segmentWithPayloadID:(id)a0 trackType:(unsigned long long)a1;
- (id)payloadWithPayloadID:(id)a0 segment:(id)a1;
- (void)updateOriginRatio;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)a0;
- (void)setCPPModel:(struct shared_ptr<CutSame::TemplateModel> { struct TemplateModel *x0; struct __shared_weak_count *x1; })a0;
- (id)allTracksOfType:(unsigned long long)a0;
- (id)tracksOfType:(unsigned long long)a0 flag:(unsigned long long)a1;
- (id)segmentsWithTrackType:(unsigned long long)a0 segmentType:(unsigned long long)a1;
- (id)totalPayloads;
- (id)payloadWithPayloadID:(id)a0 trackType:(unsigned long long)a1;
- (void)appendEditType:(id)a0;
- (void)createVideoTrackWithPayloads:(id)a0 sourceTimeRanges:(id)a1;
- (void)createVideoTrackWithPayloads:(id)a0;
- (id)appendTrack:(id)a0;
- (void)forceUpdateOriginRatio;
- (id)initWithPayloads:(id)a0 draftID:(id)a1;
- (id)initWithPayloads:(id)a0 sourceTimeRanges:(id)a1 draftID:(id)a2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)checkVersion;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mainVideoTrack;

@end
