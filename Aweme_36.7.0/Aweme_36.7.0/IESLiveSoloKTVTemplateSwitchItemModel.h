@class IESSoloKTVTemplateMainModel, IESSoloKTVDraftMainModel, IESSoloKTVVideoEditManager, AVPlayerItem, UIImage;

@interface IESLiveSoloKTVTemplateSwitchItemModel : NSObject

@property (retain, nonatomic) IESSoloKTVTemplateMainModel *templateModel;
@property (retain, nonatomic) IESSoloKTVDraftMainModel *draftModel;
@property (retain, nonatomic) IESSoloKTVVideoEditManager *editManager;
@property (retain, nonatomic) AVPlayerItem *item;
@property (retain, nonatomic) UIImage *cover;
@property (nonatomic) double progress;
@property (nonatomic) double duration;

- (id)genPlayerItem;
- (void).cxx_destruct;

@end
