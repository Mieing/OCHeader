@class NSString;

@interface AFDSchoolVerifyResult : NSObject

@property (copy, nonatomic) NSString *info;
@property (nonatomic) long long verifyResult;
@property (retain, nonatomic) NSString *schoolName;
@property (retain, nonatomic) NSString *schoolID;

- (void).cxx_destruct;

@end
