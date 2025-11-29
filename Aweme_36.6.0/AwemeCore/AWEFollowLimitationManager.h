@class NSString;

@interface AWEFollowLimitationManager : NSObject <AWEUserProfileFollowLimitationProtocol>

@property (nonatomic) BOOL videoAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (BOOL)showLimitationView:(id)a0;

@end
