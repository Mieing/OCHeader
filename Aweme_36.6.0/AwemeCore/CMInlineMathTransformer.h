@class NSString;

@interface CMInlineMathTransformer : NSObject <CMInlineTextTransformable>

@property (readonly, copy, nonatomic) NSString *key;
@property (copy, nonatomic) id /* block */ handlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tryTransform:(id)a0;
- (void).cxx_destruct;

@end
