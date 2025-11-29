@class IESECContext, NSString;
@protocol IESECBaseServiceDIProtocol;

@interface IESECBaseService : NSObject <IESECServiceProtocol>

@property (weak, nonatomic) IESECContext *context;
@property (weak, nonatomic) id container;
@property (weak, nonatomic) id<IESECBaseServiceDIProtocol> DI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateContainer:(id)a0;

@end
