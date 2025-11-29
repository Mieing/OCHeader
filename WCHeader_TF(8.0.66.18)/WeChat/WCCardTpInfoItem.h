@class NSString;

@interface WCCardTpInfoItem : MMObject

@property (retain, nonatomic) NSString *cardTpID;
@property (retain, nonatomic) NSString *cardCode;
@property (retain, nonatomic) NSString *openCardParams;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *userCardId;

- (void).cxx_destruct;

@end
