@class NSString;

@interface UBSignal : UBBaseSignal <UBSignaling>

@property (nonatomic) unsigned long long maxObservers;
@property (readonly) unsigned long long observerCount;
@property (copy, nonatomic) id /* block */ observerAdded;
@property (copy, nonatomic) id /* block */ observerRemoved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emptySignal;

- (id)initWithProtocol:(id)a0;

@end
