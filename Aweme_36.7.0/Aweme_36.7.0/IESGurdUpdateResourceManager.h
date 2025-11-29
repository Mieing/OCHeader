@interface IESGurdUpdateResourceManager : NSObject

+ (void)requestUpdateResByCustom:(id)a0 callback:(id /* block */)a1;
+ (void)requestUpdateResByConfig:(id)a0 callback:(id /* block */)a1;
+ (void)updateResByConfig:(id)a0 callback:(id /* block */)a1;
+ (void)updateResByConfig:(id)a0 reqType:(long long)a1 callback:(id /* block */)a2;
+ (void)requestUpdateRes:(id)a0 reqType:(long long)a1 callback:(id /* block */)a2;
+ (void)downloadByOdr:(id)a0 reqType:(long long)a1 callback:(id /* block */)a2;

@end
