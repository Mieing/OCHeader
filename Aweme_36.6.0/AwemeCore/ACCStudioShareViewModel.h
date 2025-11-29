@class RACSignal, NSString, RACSubject;
@protocol ACCVideoEditBottomControlService;

@interface ACCStudioShareViewModel : ACCEditViewModel <ACCStudioShareService>

@property (retain, nonatomic) id<ACCVideoEditBottomControlService> bottomControlService;
@property (retain, nonatomic) RACSubject *publishActionSubject;
@property (nonatomic) BOOL isSaveTipsShowed;
@property (readonly, nonatomic) RACSignal *publishActionSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableToolBarAddShare;
- (void)directPublish;
- (void)enterPublishPage;
- (void).cxx_destruct;
- (void)dealloc;

@end
