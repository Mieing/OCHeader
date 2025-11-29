@class RACSignal, NSString, RACSubject;

@interface ACCAIPropTextStickerViewModel : NSObject <ACCAIPropTextStickerServiceProtocol>

@property (retain, nonatomic) RACSignal *didPrepareAITextStickerInfoSignal;
@property (retain, nonatomic) RACSubject *didPrepareAITextStickerInfoSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addTextStickersWithInfos:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
