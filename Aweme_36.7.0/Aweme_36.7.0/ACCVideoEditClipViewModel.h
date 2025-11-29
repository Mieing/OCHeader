@class NSString, RACSignal, RACSubject, NSMutableArray;

@interface ACCVideoEditClipViewModel : NSObject <ACCEditClipServiceProtocol, ACCVideoEditClipProvideProtocol>

@property (retain, nonatomic) RACSignal *didFinishClipEditSignal;
@property (retain, nonatomic) RACSubject *didFinishClipEditSubject;
@property (retain, nonatomic) RACSignal *willRemoveAllEditsSignal;
@property (retain, nonatomic) RACSubject *willRemoveAllEditsSubject;
@property (retain, nonatomic) RACSignal *didRemoveAllEditsSignal;
@property (retain, nonatomic) RACSubject *didRemoveAllEditsSubject;
@property (retain, nonatomic) RACSignal *removeAllEditsSignal;
@property (retain, nonatomic) RACSubject *removeAllEditsSubject;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendRemoveAllEditsSignal;
- (void)sendDidFinishClipEditSignal;
- (void)sendWillRemoveAllEditsSignal;
- (void)sendDidRemoveAllEditsSignal;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;

@end
