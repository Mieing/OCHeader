@interface WAMediaCastingUpnpCommandService : NSObject

+ (void)playWithDevice:(id)a0 startPosition:(double)a1 uri:(id)a2 completion:(id /* block */)a3;
+ (void)playWithDevice:(id)a0 completion:(id /* block */)a1;
+ (void)stopWithDevice:(id)a0 completion:(id /* block */)a1;
+ (void)pauseWithDevice:(id)a0 completion:(id /* block */)a1;
+ (void)setVolumeWithDevice:(id)a0 volume:(double)a1 completion:(id /* block */)a2;
+ (void)seekWithDevice:(id)a0 position:(double)a1 completion:(id /* block */)a2;
+ (void)getVolumeWithDevice:(id)a0 completion:(id /* block */)a1;
+ (void)getPositionInfoWithDevice:(id)a0 completion:(id /* block */)a1;
+ (void)getMediaInfoWithDevice:(id)a0 completion:(id /* block */)a1;
+ (void)getTransportInfoWithDevice:(id)a0 completion:(id /* block */)a1;
+ (void)logErrorIfNeeded:(id)a0 prefix:(id)a1;
+ (double)toTimeInterval:(id)a0;

@end
