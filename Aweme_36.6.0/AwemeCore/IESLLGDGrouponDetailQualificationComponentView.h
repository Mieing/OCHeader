@class NSString, UIView, IESLLGDGrouponDetailQualificationComponentViewModel, IESLLGDQualificationView;

@interface IESLLGDGrouponDetailQualificationComponentView : LLDitoComponentView <IESLLGDQualificationViewDelegate>

@property (weak, nonatomic) IESLLGDGrouponDetailQualificationComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) IESLLGDQualificationView *qualificationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
