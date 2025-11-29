@class IESLiveOutsideStrokeLabel;

@interface IESLiveNewAudienceListEnterItem : UIButton

@property (nonatomic) BOOL isFlowStimulateEnable;
@property (retain, nonatomic) IESLiveOutsideStrokeLabel *pvLabel;

- (void)updateItemConfig:(BOOL)a0;
- (void)refreshUserCount:(id)a0 isFlowStimulateEnable:(BOOL)a1 isShowPVLabel:(BOOL)a2;
- (void).cxx_destruct;

@end
