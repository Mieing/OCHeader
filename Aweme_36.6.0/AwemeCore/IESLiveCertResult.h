@class NSString, NSDictionary, NSError, NSNumber;

@interface IESLiveCertResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSNumber *certStatus;
@property (retain, nonatomic) NSNumber *manualStatus;
@property (nonatomic) long long ageRange;
@property (retain, nonatomic) NSNumber *remaidedTimes;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
