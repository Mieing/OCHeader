@class NSString;

@interface AWEHPChannelRefreshModel : AWEFeedChannelTrackBaseModel <AWEHPChannelRefreshModelProtocol>

@property (nonatomic) long long scene;
@property (copy, nonatomic) NSString *triggerReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
