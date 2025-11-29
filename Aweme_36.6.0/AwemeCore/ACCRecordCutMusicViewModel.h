@class NSString, RACSignal, RACSubject, AWEVideoPublishViewModel;
@protocol IESServiceProvider;

@interface ACCRecordCutMusicViewModel : NSObject <ACCRecordCutMusicServiceProtocol>

@property (retain, nonatomic) RACSubject *didDismissPanelSubject;
@property (retain, nonatomic) RACSubject *didFinishCutMusicSubject;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (readonly, nonatomic) RACSignal *didDismissPanelSignal;
@property (readonly, nonatomic) RACSignal *didFinishCutMusicSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
