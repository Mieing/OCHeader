@class NSString;

@interface IESLiveLinkRTCInteractForwardStreamStateInfo : NSObject

@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) long long state;
@property (nonatomic) long long error;

- (void).cxx_destruct;
- (id)init;

@end
