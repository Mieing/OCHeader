@interface GPUImageAlphaBlendFilter : GPUImageTwoInputFilter {
    int mixUniform;
}

@property (nonatomic) double mix;

- (id)init;

@end
