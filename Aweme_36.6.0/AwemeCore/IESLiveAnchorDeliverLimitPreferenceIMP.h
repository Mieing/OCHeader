@class NSString;

@interface IESLiveAnchorDeliverLimitPreferenceIMP : NSObject <IESLiveDeliverLimitPreferenceService>

@property (nonatomic) BOOL allowSyncToDouyin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)deliverLimitAuthNumForRequest;

@end
