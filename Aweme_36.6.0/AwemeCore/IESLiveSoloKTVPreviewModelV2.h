@class IESSoloKTVTemplateMainModel, IESSoloKTVDraftMainModel, IESSoloKTVVideoEditManager, UIImage, NSDictionary;

@interface IESLiveSoloKTVPreviewModelV2 : NSObject

@property (retain, nonatomic) IESSoloKTVVideoEditManager *editManager;
@property (retain, nonatomic) IESSoloKTVDraftMainModel *draftModel;
@property (retain, nonatomic) IESSoloKTVTemplateMainModel *templateModel;
@property (retain, nonatomic) UIImage *cover;
@property (retain, nonatomic) NSDictionary *trackParam;
@property (nonatomic) long long sessionId;

- (id)initWithCover:(id)a0 draft:(id)a1 templateModel:(id)a2;
- (void)generatePlayerItem:(id /* block */)a0;
- (void).cxx_destruct;

@end
