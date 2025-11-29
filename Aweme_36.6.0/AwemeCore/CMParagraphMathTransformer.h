@class NSString, NSDictionary;

@interface CMParagraphMathTransformer : NSObject <CMParagraphTransformable>

@property (readonly, copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSDictionary *paragraphAttris;
@property (copy, nonatomic) id /* block */ handlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)combineLineInfos:(id)a0 withMatchs:(id)a1;
- (id)transformLines:(id)a0;
- (void).cxx_destruct;

@end
