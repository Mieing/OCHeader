@class NSString;

@interface AWEIMInputFAQListEntity : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *sendCorpus;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *itemLabel;
@property (nonatomic) BOOL isFromUserAsk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)sendText;
- (void).cxx_destruct;

@end
