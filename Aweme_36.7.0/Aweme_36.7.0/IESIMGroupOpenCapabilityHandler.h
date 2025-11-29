@class NSString;

@interface IESIMGroupOpenCapabilityHandler : NSObject <IESIMGroupOpenCapabilityHandlerProtocol>

@property (copy, nonatomic) NSString *target;
@property (retain, nonatomic) Class targetViewController;
@property (retain, nonatomic) Class model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTarget:(id)a0 targetViewController:(Class)a1 model:(Class)a2;
- (void).cxx_destruct;

@end
