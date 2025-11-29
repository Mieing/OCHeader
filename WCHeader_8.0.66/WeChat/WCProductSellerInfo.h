@class NSString, WCProductLocationInfo;

@interface WCProductSellerInfo : NSObject

@property (retain, nonatomic) NSString *appID;
@property (retain, nonatomic) NSString *usrName;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) WCProductLocationInfo *locationInfo;
@property (retain, nonatomic) NSString *contactWay;
@property (retain, nonatomic) NSString *logoImg;
@property (nonatomic) unsigned int flag;

- (void).cxx_destruct;

@end
