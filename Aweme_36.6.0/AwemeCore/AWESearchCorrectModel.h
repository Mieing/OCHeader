@class NSString, NSDictionary;

@interface AWESearchCorrectModel : AWEBaseApiModel <AWESearchCorrectModelProtocol>

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *defaultKeyword;
@property (retain, nonatomic) NSDictionary *logPassback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *defaultKeyword;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
