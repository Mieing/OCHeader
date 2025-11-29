@class TingUserRemoteFeature, TingUserLocalFeature;

@interface TingUserFeature : WXPBGeneratedMessage

@property (retain, nonatomic) TingUserLocalFeature *localFeature;
@property (retain, nonatomic) TingUserRemoteFeature *remoteFeature;

+ (void)initialize;

@end
