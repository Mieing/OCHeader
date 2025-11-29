@class NSString, IESLiveGuideModel, HTSEventContext, IESLiveComponentContext, CreateInfoResponse_CreateInfo, NSDictionary;

@interface IESLiveGuideBaseConfig : NSObject

@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *sourceParam;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) CreateInfoResponse_CreateInfo *openLiveModel;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL willCloseGuideVC;

- (void)updateOpenLiveModel:(id)a0;
- (id)initWithPageTrackParams:(id)a0 sourceParam:(id)a1 guideModel:(id)a2 openLiveModel:(id)a3 trackContext:(id)a4 componentContext:(id)a5;
- (void).cxx_destruct;

@end
