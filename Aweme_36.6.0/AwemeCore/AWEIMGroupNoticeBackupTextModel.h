@class NSString, NSDictionary;

@interface AWEIMGroupNoticeBackupTextModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
