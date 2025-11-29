@class NSDictionary, NSString;

@interface AWELiveAnnouncementViewConfig : NSObject <AWELiveAnnouncementPanelConfigProtocol>

@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *pageType;
@property (nonatomic) long long displayMode;
@property (nonatomic) long long selectedAnnouncementID;
@property (nonatomic) long long entranceType;
@property (nonatomic) long long announcementID;
@property (copy, nonatomic) NSDictionary *configParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)announcementPanelConfig;
- (void).cxx_destruct;

@end
