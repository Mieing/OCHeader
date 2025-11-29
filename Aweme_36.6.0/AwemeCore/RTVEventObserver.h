@class NSString;

@interface RTVEventObserver : NSObject <RTVEventObserver>

@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) id /* block */ onDispose;
@property (nonatomic) BOOL disposed;
@property (readonly, nonatomic) BOOL isDisposed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
