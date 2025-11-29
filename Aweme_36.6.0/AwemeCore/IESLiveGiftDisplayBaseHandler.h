@class NSString;
@protocol IESLiveGiftDisplayHandlerProtocol;

@interface IESLiveGiftDisplayBaseHandler : NSObject <IESLiveGiftDisplayHandlerProtocol>

@property (retain, nonatomic) id<IESLiveGiftDisplayHandlerProtocol> nextHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableDisplayWithGift:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end
