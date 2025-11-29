@class RACSignal, NSString, RACSubject;
@protocol ACCMVSelectViewModelDelegate;

@interface ACCMVSelectViewModel : ACCRecorderViewModel <ACCMVSelectService>

@property (retain, nonatomic) RACSubject *updatePublishModelWithCutSameTemplateSubject;
@property (retain, nonatomic) RACSubject *needResetMusicSubject;
@property (retain, nonatomic) RACSubject *mvTemplatePropDidSelectSubject;
@property (weak, nonatomic) id<ACCMVSelectViewModelDelegate> delegate;
@property (readonly, nonatomic) RACSignal *updatePublishModelWithCutSameTemplateSignal;
@property (readonly, nonatomic) RACSignal *needResetMusicSignal;
@property (readonly, nonatomic) RACSignal *mvTemplatePropDidSelectSingal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendMVTemplatePropSelectSingal:(id)a0;
- (void)inspirationClickVimoTemplatePropSelectSingal:(id)a0;
- (void)send_updatePublishModelWithCutSameTemplateSignal;
- (void)send_needResetMusicSignal;
- (void).cxx_destruct;
- (void)dealloc;

@end
