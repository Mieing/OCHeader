@class NSString;

@interface IESLiveVIPGlobalServiceImpl : NSObject <IESLiveVIPGlobalService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNoneVipTrialOpen;
- (id)afterLiveCardWithData:(id)a0 container:(id)a1;

@end
