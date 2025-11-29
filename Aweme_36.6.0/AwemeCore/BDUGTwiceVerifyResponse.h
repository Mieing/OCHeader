@class NSDictionary, NSError;

@interface BDUGTwiceVerifyResponse : NSObject

@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;

@end
