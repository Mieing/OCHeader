@interface MMVideoCompressHelper : MMObject

+ (id)getCacheFilePathFrom:(id)a0;
+ (id)getOutputFilePathFrom:(id)a0;
+ (void)exportVideoFromUrl:(id)a0 toOutputUrl:(id)a1 shouldScaleDuration:(BOOL)a2 withBlock:(id /* block */)a3;

@end
