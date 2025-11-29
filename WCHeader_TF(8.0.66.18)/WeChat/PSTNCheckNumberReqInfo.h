@class NSString;

@interface PSTNCheckNumberReqInfo : NSObject

@property (copy, nonatomic) NSString *PureNumber;
@property (copy, nonatomic) NSString *ClientCountry;
@property (copy, nonatomic) NSString *LastCountry;
@property (copy, nonatomic) NSString *SimCountry;
@property (copy, nonatomic) NSString *OsCountry;
@property (nonatomic) unsigned int DialScene;

- (void).cxx_destruct;

@end
