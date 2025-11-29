@interface AWESearchGurdTool : NSObject

+ (void)fetchResource:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
+ (void)asyncGetDataForResource:(id)a0 channel:(id)a1 completion:(id /* block */)a2;
+ (void)fetchResource:(id)a0 completion:(id /* block */)a1;
+ (void)fetchResourceByBundle:(id)a0 channel:(id)a1 completion:(id /* block */)a2;

@end
