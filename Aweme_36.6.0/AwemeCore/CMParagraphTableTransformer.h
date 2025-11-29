@class NSString, NSDictionary;

@interface CMParagraphTableTransformer : NSObject <CMParagraphTransformable>

@property (nonatomic) unsigned short separator;
@property (readonly, copy, nonatomic) NSString *key;
@property (retain, nonatomic) NSDictionary *paragraphAttris;
@property (copy, nonatomic) id /* block */ handlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transformLines:(id)a0;
- (id)convertTableInfo:(id)a0;
- (id)rowInfoWithLineInfo:(id)a0;
- (id)cellStrFromAttributedStr:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
