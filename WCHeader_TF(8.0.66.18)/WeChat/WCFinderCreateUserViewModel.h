@class NSString;

@interface WCFinderCreateUserViewModel : NSObject

@property (copy, nonatomic) NSString *curPoiCountry;
@property (copy, nonatomic) NSString *curPoiProvince;
@property (copy, nonatomic) NSString *curPoiCity;
@property (nonatomic) long long weixinSexType;
@property (nonatomic) unsigned long long maxWordCount;
@property (nonatomic) unsigned long long minWordCount;

+ (id)genAgreementContent;

- (id)init;
- (void)updateWithUserPrepareCache;
- (BOOL)validateName:(id)a0;
- (BOOL)isStringEmpty:(id)a0;
- (BOOL)isInvalidInputErrCode:(int)a0;
- (id)tipsWithErrCode:(int)a0;
- (BOOL)needVerifyName:(int)a0;
- (BOOL)hitNameProtect:(int)a0;
- (void)fetchLocationAddressCodeWithCompletion:(id /* block */)a0 failed:(id /* block */)a1;
- (void).cxx_destruct;

@end
