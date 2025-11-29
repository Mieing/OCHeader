@class NSString;

@interface AFDUserMoodService : HTSService <AFDUserMoodService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableByUser:(id)a0;
- (BOOL)enableUseUserMood;
- (BOOL)enableUseUserMoodWithUser:(id)a0;

@end
