@class NSString;

@interface KindaUseCaseCallbackObject : NSObject <MMUseCaseCallback>

@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create:(id /* block */)a0;

- (void)call:(id)a0;
- (void).cxx_destruct;

@end
