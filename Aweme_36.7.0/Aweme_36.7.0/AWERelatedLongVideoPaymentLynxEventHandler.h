@class NSString, NSMutableArray;
@protocol AWERelatedLongVideoPaymentLynxEventHandlerDelegate;

@interface AWERelatedLongVideoPaymentLynxEventHandler : NSObject <AWERelatedLongVideoPaymentLynxEventHandlerProtocol>

@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (weak, nonatomic) id<AWERelatedLongVideoPaymentLynxEventHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
