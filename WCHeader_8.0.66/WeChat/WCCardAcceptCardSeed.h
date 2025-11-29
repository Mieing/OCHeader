@class NSString;

@interface WCCardAcceptCardSeed : MMObject

@property (nonatomic) unsigned int cardType;
@property (retain, nonatomic) NSString *cardTpID;
@property (retain, nonatomic) NSString *cardExt;

- (void).cxx_destruct;

@end
