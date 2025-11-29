@class NSString;

@interface FavorInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long favType;
@property (nonatomic) unsigned long long favSubType;
@property (nonatomic) unsigned long long favProperty;
@property (retain, nonatomic) NSString *favorTypeDesc;
@property (nonatomic) unsigned long long favId;
@property (retain, nonatomic) NSString *favName;
@property (retain, nonatomic) NSString *favDesc;
@property (retain, nonatomic) NSString *favorUseManual;
@property (retain, nonatomic) NSString *favorRemarks;
@property (retain, nonatomic) NSString *favPrice;
@property (retain, nonatomic) NSString *realFavFee;
@property (nonatomic) unsigned int favScopeType;
@property (retain, nonatomic) NSString *businessReceiptNo;
@property (nonatomic) unsigned int unavailable;
@property (retain, nonatomic) NSString *extendStr;

+ (id)GenFromDictionary:(id)a0;
+ (void)initialize;

@end
