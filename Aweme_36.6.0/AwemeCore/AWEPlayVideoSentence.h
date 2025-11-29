@class NSString, NSMutableAttributedString, NSArray;

@interface AWEPlayVideoSentence : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSMutableAttributedString *attributeText;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) int startTime;
@property (nonatomic) int endTime;
@property (retain, nonatomic) NSArray *textExtras;
@property (nonatomic) unsigned long long location;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) BOOL hasSerchWord;
@property (nonatomic) BOOL highlight;
@property (nonatomic) int index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textExtrasJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
