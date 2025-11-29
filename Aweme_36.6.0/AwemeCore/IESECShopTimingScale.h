@class NSString, IESECURLModel;

@interface IESECShopTimingScale : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isAppointed;
@property (copy, nonatomic) NSString *startDate;
@property (copy, nonatomic) NSString *appointText;
@property (copy, nonatomic) NSString *appointedText;
@property (retain, nonatomic) IESECURLModel *appointIcon;
@property (nonatomic) long long startTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
