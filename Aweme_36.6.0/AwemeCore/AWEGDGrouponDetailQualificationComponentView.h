@class AWEGDQualificationView, AWEGDGrouponDetailQualificationComponentViewModel, NSString, UIView;

@interface AWEGDGrouponDetailQualificationComponentView : DitoComponentView <AWEGDQualificationViewDelegate>

@property (weak, nonatomic) AWEGDGrouponDetailQualificationComponentViewModel *viewModel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEGDQualificationView *qualificationView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
