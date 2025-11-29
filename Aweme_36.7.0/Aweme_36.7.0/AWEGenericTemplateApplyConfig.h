@class NSArray, NSDictionary, AWEVideoPublishViewModel, NLEModel_OC;

@interface AWEGenericTemplateApplyConfig : NSObject

@property (nonatomic) BOOL skipUpdateVideoData;
@property (nonatomic) BOOL forbidPlay;
@property (retain, nonatomic) NSArray *followShootParamsArray;
@property (weak, nonatomic) NLEModel_OC *externalModel;
@property (copy, nonatomic) NSArray *replaceSources;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL lastTemplateHasStickers;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) id /* block */ onDidUpdatePrepareProgress;
@property (copy, nonatomic) id /* block */ onWillApply;
@property (copy, nonatomic) id /* block */ onDidPreprocess;
@property (copy, nonatomic) id /* block */ onDidApply;
@property (copy, nonatomic) id /* block */ onDidUpdateVideoData;
@property (copy, nonatomic) id /* block */ onTemplateFirstRender;
@property (copy, nonatomic) id /* block */ onSeekCompletion;

- (void).cxx_destruct;

@end
