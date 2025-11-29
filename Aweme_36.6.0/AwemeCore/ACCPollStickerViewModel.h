@class RACSignal, NSString, RACSubject;

@interface ACCPollStickerViewModel : NSObject <ACCPollStickerService>

@property (retain, nonatomic) RACSubject *stickerWillDeleteSubject;
@property (retain, nonatomic) RACSubject *showPollStickerSubject;
@property (readonly, nonatomic) RACSignal *stickerWillDeleteSignal;
@property (readonly, nonatomic) RACSignal *showPollStickerSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
