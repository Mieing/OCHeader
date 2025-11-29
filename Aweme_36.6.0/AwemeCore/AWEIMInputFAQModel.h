@class NSArray, NSString;

@interface AWEIMInputFAQModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *answerList;
@property (retain, nonatomic) NSArray *trayPhraseList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)answerListJSONTransformer;
+ (id)trayPhraseListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
