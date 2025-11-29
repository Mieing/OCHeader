@class NSString, NSDictionary;

@interface AWEStudioLocalLifeNoticeToastModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *toastContent;
@property (nonatomic) long long toastType;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
