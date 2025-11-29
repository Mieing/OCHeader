@class NSString;

@interface AWEPhotoWaterMarkUtil : HTSService <AWEPhotoWaterMarkUtil>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addWaterMarkForSourceImage:(id)a0 completion:(id /* block */)a1;
+ (void)addWaterMarkForSourceImage:(id)a0 waterMarkImageName:(id)a1 completion:(id /* block */)a2;
+ (void)addWaterMarkForSourceImage:(id)a0 waterMarkImage:(id)a1 completion:(id /* block */)a2;
+ (void)addWaterMarkWithoutPaddingForSourceImage:(id)a0 waterMarkImage:(id)a1 completion:(id /* block */)a2;


@end
