@class NSString;

@interface BDPCommunityEntranceSettingsModel : NSObject

@property (nonatomic) BOOL totalSwitch;
@property (copy, nonatomic) NSString *lightIconURL;
@property (copy, nonatomic) NSString *darkIconURL;
@property (copy, nonatomic) NSString *communityId;
@property (copy, nonatomic) NSString *communityHost;
@property (copy, nonatomic) NSString *communityStartPage;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
