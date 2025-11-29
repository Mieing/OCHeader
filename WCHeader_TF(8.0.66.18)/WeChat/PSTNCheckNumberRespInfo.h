@class NSString;

@interface PSTNCheckNumberRespInfo : NSObject

@property (copy, nonatomic) NSString *PureNumber;
@property (copy, nonatomic) NSString *CountryCode;
@property (nonatomic) unsigned int result;

- (void).cxx_destruct;

@end
