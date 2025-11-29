@class NSString;

@interface FlowLinkSDK.FlowLinkReason : NSError

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (id)initWithDomain:(id)a0 code:(long long)a1 userInfo:(id)a2;

@end
