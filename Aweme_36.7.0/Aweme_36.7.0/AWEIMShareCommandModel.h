@class NSString;

@interface AWEIMShareCommandModel : IESIMBaseApiModel

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *pasteDescription;
@property (retain, nonatomic) NSString *qrText;
@property (nonatomic) long long shareChannel;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *shareUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
