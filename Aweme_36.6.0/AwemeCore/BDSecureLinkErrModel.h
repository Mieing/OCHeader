@class NSString, NSDate;

@interface BDSecureLinkErrModel : NSObject

@property (retain, nonatomic) NSDate *occurDate;
@property (nonatomic) unsigned long long errorType;
@property (nonatomic) long long errorCode;
@property (retain, nonatomic) NSString *errorMsg;

- (void).cxx_destruct;

@end
