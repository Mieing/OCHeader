@class NSString;

@interface WCCardAcceptCardInfo : MMObject

@property (nonatomic) unsigned int succCount;
@property (nonatomic) unsigned int retCode;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) NSString *retJson;

- (void).cxx_destruct;

@end
