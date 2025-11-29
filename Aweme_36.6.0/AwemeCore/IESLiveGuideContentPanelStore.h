@class IESLiveGuideContentPanelModel;
@protocol IESLiveGuideProvider;

@interface IESLiveGuideContentPanelStore : NSObject

@property (retain, nonatomic) id<IESLiveGuideProvider> guideProvider;
@property (retain, nonatomic) IESLiveGuideContentPanelModel *model;

- (void)didSetAttachingDIContext;
- (void)bindActionWithGuideModel:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
