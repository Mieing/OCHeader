@interface WAEJGLProgram2DRadialGradient : WAEJGLProgram2D

@property (readonly, nonatomic) unsigned int inner;
@property (readonly, nonatomic) unsigned int diff;

- (void)getUniforms;

@end
