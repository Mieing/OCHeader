@class NSString, AWESearchDecoratorContainerContext, NSObject;
@protocol AWESearchDecoratorBusinessProtocol;

@interface AWESearchDecoratorManager : NSObject <AWESearchDecoratorDelegateProtocol>

@property (retain, nonatomic) AWESearchDecoratorContainerContext *containerContext;
@property (retain, nonatomic) NSObject<AWESearchDecoratorBusinessProtocol> *currentBusiness;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearCurrentBusiness;
- (void).cxx_destruct;
- (void)updateWithContext:(id)a0;

@end
