@class IESECLiveListBottomGuideModel, NSString, UIImageView, NSArray, NSMutableArray, IESECLiveListBottomGuideContentView;
@protocol IESECLiveListBottomGuideViewDelegate;

@interface IESECLiveListBottomGuideView : UIView <IESECLiveConfigViewDelegate>

@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) IESECLiveListBottomGuideContentView *leftView;
@property (retain, nonatomic) IESECLiveListBottomGuideContentView *rightView;
@property (retain, nonatomic) NSString *lastGuideWord;
@property (retain, nonatomic) NSMutableArray *updatedLeftElementIndexArray;
@property (retain, nonatomic) NSMutableArray *updatedRightElementIndexArray;
@property (retain, nonatomic) NSArray *updatedLeftContent;
@property (retain, nonatomic) NSArray *updatedRightContent;
@property (retain, nonatomic) NSMutableArray *showTrackInfoArray;
@property (retain, nonatomic) IESECLiveListBottomGuideModel *bottomGuideInfo;
@property (weak, nonatomic) id<IESECLiveListBottomGuideViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickAction;
- (void)combinationBlockClickAction:(id)a0;
- (void)updateBottomViewGuideInfo:(id)a0;
- (id)getShowTrackInfoArray;
- (void)p_rightViewLayout;
- (void)p_resetLeftElementViewsShow:(BOOL)a0;
- (void)p_resetRightElementViewsShow:(BOOL)a0;
- (void)updateBottomLeftViewGuideInfo:(id)a0;
- (void)updateBottomRightViewGuideInfo:(id)a0;
- (id)p_updatedConfigContent:(id)a0 withReplaceContent:(id)a1 indexArray:(id)a2;
- (void)p_resetElementViewsShow:(BOOL)a0;
- (void)p_accessibilityLabelTextConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
