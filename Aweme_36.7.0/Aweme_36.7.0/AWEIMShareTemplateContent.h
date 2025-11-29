@class NSArray, NSString, AWEURLModel;

@interface AWEIMShareTemplateContent : AWEIMMessageContent

@property (retain, nonatomic) NSArray *videoCoverURLs;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) NSString *templateName;
@property (retain, nonatomic) NSString *templateID;
@property (nonatomic) long long userCount;
@property (nonatomic) long long templateType;
@property (nonatomic) long long aweType;
@property (nonatomic) unsigned long long lokiTemplateID;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
