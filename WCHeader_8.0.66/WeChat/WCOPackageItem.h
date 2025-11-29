@class NSString;

@interface WCOPackageItem : NSObject

@property (retain, nonatomic) NSString *ProductID;
@property (retain, nonatomic) NSString *Title;
@property (retain, nonatomic) NSString *Price;
@property (retain, nonatomic) NSString *Wording;
@property (retain, nonatomic) NSString *Desc;
@property (retain, nonatomic) NSString *CountryFlagImgUrl;
@property (nonatomic) unsigned int flag;

- (void).cxx_destruct;

@end
