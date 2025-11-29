@class NSString, NSMutableArray, WCAdColorInfo;

@interface WCADChainStrengthenInfo : NSObject

@property (nonatomic) int wordingType;
@property (retain, nonatomic) NSString *directWording;
@property (retain, nonatomic) NSString *replaceWording;
@property (retain, nonatomic) NSString *wordingLink;
@property (retain, nonatomic) NSMutableArray *arrUserName;
@property (retain, nonatomic) NSString *wordingComplexString;
@property (nonatomic) unsigned int wordingComplexExchangeValue;
@property (nonatomic) int topMargin;
@property (nonatomic) int bottomMargin;
@property (retain, nonatomic) WCAdColorInfo *textColor;
@property (retain, nonatomic) NSString *reportDataStr;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isNormalWordingValid;
- (BOOL)isComplexWordingValid;
- (void).cxx_destruct;

@end
