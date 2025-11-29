@class NSString;
@protocol IESGCPCGContainer;

@interface IESGCPCGContainerFactoryImpl : NSObject <IESGCPCGContainerFactory>

@property (retain, nonatomic) id<IESGCPCGContainer> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
