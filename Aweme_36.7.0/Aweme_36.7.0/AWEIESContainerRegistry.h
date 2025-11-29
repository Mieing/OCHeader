@class NSString, IESContainer;

@interface AWEIESContainerRegistry : NSObject <AWEGenericRegistry>

@property (retain, nonatomic) IESContainer *container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
