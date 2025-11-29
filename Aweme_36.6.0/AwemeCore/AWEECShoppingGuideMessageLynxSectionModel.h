@class NSString, NSDictionary;

@interface AWEECShoppingGuideMessageLynxSectionModel : AWEECShoppingGuideMessageSectionModel

@property (copy, nonatomic) NSString *cardId;
@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *cardData;
@property (copy, nonatomic) NSString *eventData;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSDictionary *uiData;
@property (nonatomic) long long showHeight;
@property (nonatomic) double actuallyHeight;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
