@class NSString;

@interface AWEPOILocationServiceBarLocationAuthorizationReqConfig : NSObject

@property (copy, nonatomic) NSString *contentText;
@property (copy, nonatomic) NSString *actionText;
@property (nonatomic) long long bottomOffset;
@property (nonatomic) long long dismissTime;

- (id)initWithContentText:(id)a0 actionText:(id)a1 bottomOffset:(long long)a2 dismissTime:(long long)a3;
- (void).cxx_destruct;

@end
