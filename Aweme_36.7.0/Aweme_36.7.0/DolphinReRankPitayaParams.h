@class NSString, NSDictionary;

@interface DolphinReRankPitayaParams : NSObject

@property (copy, nonatomic) NSString *pitayaFunctionName;
@property (copy, nonatomic) NSString *clientSideParams;
@property (copy, nonatomic) NSString *serverSideParams;
@property (copy, nonatomic) NSDictionary *abParams;

- (void).cxx_destruct;

@end
