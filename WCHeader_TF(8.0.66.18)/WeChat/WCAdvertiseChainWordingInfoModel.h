@class NSString, NSArray;

@interface WCAdvertiseChainWordingInfoModel : NSObject

@property (nonatomic) int wordingType;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *wordingRepIOS;
@property (retain, nonatomic) NSString *wordingRepAndroid;
@property (retain, nonatomic) NSString *wordingLink;
@property (retain, nonatomic) NSArray *userNameList;
@property (retain, nonatomic) NSString *wordingComplexString;
@property (nonatomic) unsigned int wordingComplexExchangeValue;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
