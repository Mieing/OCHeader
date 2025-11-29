@class NSString, NSDictionary, NSData, NSError, NSNumber;

@interface BytedCertResult : NSObject

@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSNumber *certStatus;
@property (retain, nonatomic) NSNumber *manualStatus;
@property (nonatomic) long long ageRange;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSNumber *remaidedTimes;
@property (copy, nonatomic) NSString *videoPath;
@property (retain, nonatomic) NSData *sdkData;

- (void).cxx_destruct;

@end
