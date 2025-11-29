@interface MMGPUSpatialRecursiveDenosing : MMGPUThreeTextureRender {
    int spatialRecursiveFilterControlUniform;
    int spatialRecursiveFilterSwitchUniform;
}

- (id)init;
- (void)setSpatialRecursiveFilterControl:(int)a0;

@end
