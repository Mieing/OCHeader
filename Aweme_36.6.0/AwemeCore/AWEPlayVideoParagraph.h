@class NSArray, NSString;

@interface AWEPlayVideoParagraph : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *videoSentences;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoSentencesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
