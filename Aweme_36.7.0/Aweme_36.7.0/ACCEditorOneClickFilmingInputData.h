@class ACCEditorOneClickFilmingViewModel, NSString, UIView, AWEVideoPublishViewModel;
@protocol IESServiceRegister, IESServiceProvider;

@interface ACCEditorOneClickFilmingInputData : NSObject <ACCBusinessInputData>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<IESServiceRegister, IESServiceProvider> context;
@property (weak, nonatomic) ACCEditorOneClickFilmingViewModel *viewModel;
@property (retain, nonatomic) UIView *previewSnapshot;
@property (nonatomic) unsigned long long scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createId;
- (long long)inputDataType;
- (void).cxx_destruct;

@end
