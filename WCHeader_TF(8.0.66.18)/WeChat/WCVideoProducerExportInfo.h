@class SightDraft, OMJTemplateInfo, OMJMusicInfo, MJTemplateCompositeTask;

@interface WCVideoProducerExportInfo : NSObject

@property (retain, nonatomic) OMJTemplateInfo *templateInfo;
@property (retain, nonatomic) OMJMusicInfo *musicInfo;
@property (retain, nonatomic) SightDraft *exportSightDraft;
@property (retain, nonatomic) MJTemplateCompositeTask *templateCompositeTask;

- (void).cxx_destruct;

@end
