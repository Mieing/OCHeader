@class NSString;

@interface AFDUserServiceImpl : NSObject <CMCUserService>

@property (readonly, copy, nonatomic) NSString *currentUserId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
