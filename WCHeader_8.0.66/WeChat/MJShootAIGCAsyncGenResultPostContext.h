@class NSString, MMShortVideoParamModel, MJShootComposingDraft, OMJRecordingFinishInfo, FinderVideoTemplateInfo;

@interface MJShootAIGCAsyncGenResultPostContext : NSObject

@property (retain, nonatomic) OMJRecordingFinishInfo *finishInfo;
@property (retain, nonatomic) MJShootComposingDraft *draft;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) MMShortVideoParamModel *paramModel;
@property (nonatomic) BOOL hasMutatedByMovieComposing;
@property (retain, nonatomic) FinderVideoTemplateInfo *aigcAsyncTemplateInfo;

- (void).cxx_destruct;

@end
