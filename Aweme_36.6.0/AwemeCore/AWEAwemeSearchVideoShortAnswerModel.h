@class NSString, AWEAwemeSearchVideoShortAnswerPrefixModel;

@interface AWEAwemeSearchVideoShortAnswerModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long displayType;
@property (nonatomic) long long displayRows;
@property (retain, nonatomic) NSString *answerText;
@property (retain, nonatomic) NSString *contentText;
@property (retain, nonatomic) AWEAwemeSearchVideoShortAnswerPrefixModel *prefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
