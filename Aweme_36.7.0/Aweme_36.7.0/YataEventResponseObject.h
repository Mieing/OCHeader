@class NSString, NSDictionary;

@interface YataEventResponseObject : NSObject

@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) BOOL breakNext;
@property (nonatomic) BOOL ignoreError;
@property (retain, nonatomic) NSDictionary *response;

- (void).cxx_destruct;
- (id)init;

@end
