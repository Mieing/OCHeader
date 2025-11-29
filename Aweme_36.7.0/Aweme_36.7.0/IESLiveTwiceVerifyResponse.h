@class NSDictionary, NSError, NSString;

@interface IESLiveTwiceVerifyResponse : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *ticket;

- (void).cxx_destruct;

@end
