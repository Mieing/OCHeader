@class NSString;

@interface __CSJUserAction : NSObject

@property (nonatomic) BOOL lastSkip;
@property (nonatomic) BOOL lastClick;
@property (copy, nonatomic) NSString *lastDomain;
@property (copy, nonatomic) NSString *lastBundle;
@property (copy, nonatomic) NSString *requestId;

- (void).cxx_destruct;
- (id)dictionaryValue;

@end
