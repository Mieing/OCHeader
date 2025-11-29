@class NSString;

@interface TXCMetalShaders : NSObject

@property (class, readonly) NSString *defaultVertexFuncName;
@property (class, readonly) NSString *defaultFragmentFuncName;
@property (class, readonly) NSString *basicVertexFunc;
@property (class, readonly) NSString *twoInputVertexFunc;
@property (class, readonly) NSString *bgraFragmentFunc;
@property (class, readonly) NSString *rgbaFragmentFunc;

+ (id)buildShaderSourceWithFragmentSource:(id)a0;
+ (id)buildShaderSourceWithVertexSource:(id)a0 fragmentSource:(id)a1;

@end
