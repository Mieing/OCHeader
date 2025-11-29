@class NSString;

@interface IESLocalLifeWebImageHostService : HTSService <IESLocalLifeWebImageHostService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestImageWithURLArray:(id)a0 completion:(id /* block */)a1;
+ (id)getWebImageExceptedSizeWithType:(unsigned long long)a0 byBizTag:(id)a1;
+ (id)fetchImageWithImageView:(id)a0 urlArray:(id)a1 placeholder:(id)a2 cacheName:(id)a3 options:(long long)a4 sizeLimit:(struct CGSize { double x0; double x1; })a5 memoryLimit:(unsigned long long)a6 progress:(id /* block */)a7 transformer:(id)a8 decryptBlock:(id /* block */)a9 completion:(id /* block */)a10;
+ (void)requestImageWithURLArray:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
+ (void)requestImageWithURLArray:(id)a0 options:(long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;


@end
