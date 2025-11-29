@class NSMutableSet, NSMutableDictionary;

@interface WAEJBindingWebGLVertexArray : WAEJBindingWebGLObject

@property (nonatomic) BOOL allEnableVertexAttribBufferBound;
@property (nonatomic) NSMutableSet *enabledAttribs;
@property (nonatomic) NSMutableDictionary *attribToBuffer;
@property (nonatomic) int elementArrayBuffer;

+ (struct OpaqueJSValue { } *)createJSObjectWithContext:(struct OpaqueJSContext { } *)a0 scriptView:(id)a1 webglContext:(id)a2 index:(unsigned int)a3;

- (id)initWithWebGLContext:(id)a0 index:(unsigned int)a1;
- (void)dealloc;
- (void)invalidate;
- (BOOL)isAllEnabledVertexAttribBufferBound;
- (void)updateAttribBufferBoundStatus;
- (void)setArrayBuffer:(int)a0 forAttrib:(unsigned int)a1;
- (void)setAttribEnabled:(BOOL)a0 at:(unsigned int)a1;
- (void)removeBuffer:(int)a0;

@end
