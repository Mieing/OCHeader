@class NSString;

@interface IESLocalLifeUIPopoverServiceImpl : NSObject <IESLocalLifeUIPopoverService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (id)createWithContent:(id)a0 target:(id)a1 clickBlock:(id /* block */)a2;
- (id)createWithContentView:(id)a0 target:(id)a1 clickBlock:(id /* block */)a2;
- (id)createBootstrapViewWithContentText:(id)a0 linkText:(id)a1 target:(id)a2 clickBlock:(id /* block */)a3;

@end
