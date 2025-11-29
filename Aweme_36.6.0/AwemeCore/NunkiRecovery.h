@class NSString;
@protocol NunkiRecoveryDelegate;

@interface NunkiRecovery : NSObject <AWESettingsPushMessage>

@property (nonatomic) BOOL enableNunki;
@property (weak, nonatomic) id<NunkiRecoveryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
