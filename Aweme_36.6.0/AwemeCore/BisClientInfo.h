@class NSString;

@interface BisClientInfo : NSObject

@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *os;
@property (retain, nonatomic) NSString *osVer;
@property (retain, nonatomic) NSString *clientVer;

- (void).cxx_destruct;

@end
