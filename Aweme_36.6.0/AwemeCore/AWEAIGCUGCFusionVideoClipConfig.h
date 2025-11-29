@class AWEAIGCUGCFusionLocalVideoInfo, AWEAIGCUGCFusionRemoteVideoInfo, AWEAIGCUGCFusionVideoEditExportResult;

@interface AWEAIGCUGCFusionVideoClipConfig : NSObject

@property (nonatomic) unsigned long long clipSource;
@property (retain, nonatomic) AWEAIGCUGCFusionLocalVideoInfo *localVideoInfo;
@property (retain, nonatomic) AWEAIGCUGCFusionRemoteVideoInfo *remoteVideoInfo;
@property (retain, nonatomic) AWEAIGCUGCFusionVideoEditExportResult *localReferenceVideoInfo;
@property (nonatomic) unsigned long long enterScene;

- (void).cxx_destruct;

@end
