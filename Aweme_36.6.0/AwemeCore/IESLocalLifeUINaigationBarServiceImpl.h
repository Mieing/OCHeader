@class NSString;

@interface IESLocalLifeUINaigationBarServiceImpl : NSObject <IESLocalLifeUINaigationBarService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (id)createNavigationBar;
- (id)createActionWithImage:(id)a0 onClickBlock:(id /* block */)a1;
- (id)createActionWithImage:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2 withActionPadding:(double)a3;

@end
