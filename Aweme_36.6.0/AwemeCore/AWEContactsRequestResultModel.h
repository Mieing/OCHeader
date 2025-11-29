@class NSError;

@interface AWEContactsRequestResultModel : NSObject

@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isPermitted;
@property (nonatomic) BOOL isFirstRequestTime;
@property (nonatomic) BOOL isRefused;

- (void).cxx_destruct;

@end
