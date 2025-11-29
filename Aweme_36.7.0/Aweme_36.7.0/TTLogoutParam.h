@class NSString, NSDictionary;

@interface TTLogoutParam : NSObject

@property (retain, nonatomic) NSString *fromUrlPath;
@property (retain, nonatomic) NSString *fromLogId;
@property (copy, nonatomic) NSDictionary *extraInfo;

- (id)finalExtraInfo:(id)a0;
- (void).cxx_destruct;

@end
