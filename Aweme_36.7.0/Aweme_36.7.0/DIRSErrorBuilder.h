@class NSString, NSError, NSDictionary;

@interface DIRSErrorBuilder : NSObject

@property (nonatomic) long long code;
@property (copy, nonatomic) NSString *desc;
@property (retain, nonatomic) NSError *underlyingError;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) NSString *domain;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)builder;

- (id)withDomain:(id)a0;
- (id)withCode:(unsigned long long)a0;
- (id)withDescription:(id)a0;
- (id)userDomain;
- (long long)userErrorCode;
- (id)buildUserInfo;
- (id)withUserInfo:(id)a0;
- (id)withDescriptionFormat:(id)a0;
- (id)withFailureReason:(id)a0;
- (id)withUnderlyingError:(id)a0;
- (BOOL)buildError:(id *)a0;
- (void).cxx_destruct;
- (id)build;

@end
