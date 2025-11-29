@class NSString, AWEAwemeSearchVideoAbstractSectionPrefixModel, NSArray, NSNumber, AWEAwemeSearchVideoShortAnswerModel;

@interface AWEAwemeSearchVideoAbstractModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) long long displayType;
@property (nonatomic) long long position;
@property (retain, nonatomic) AWEAwemeSearchVideoAbstractSectionPrefixModel *prefix;
@property (readonly, nonatomic) NSNumber *jumpTime;
@property (readonly, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *textExtras;
@property (retain, nonatomic) NSArray *sections;
@property (readonly, nonatomic) long long sectionsType;
@property (nonatomic) double offsetX;
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) AWEAwemeSearchVideoShortAnswerModel *shortAnswerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionsJSONTransformer;
+ (id)textExtrasJSONTransformer;
+ (id)prefixJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
