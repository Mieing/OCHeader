@class NSString, JSAPIGetAllUseUserInfoResponse_PrivacyScopeItem;

@interface BrandProfileAuthorizedScopeTableCellViewModel : NSObject

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) unsigned int useState;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *darkModeIconUrl;
@property (nonatomic) BOOL isManaging;
@property (nonatomic) double cellHeight;
@property (retain, nonatomic) JSAPIGetAllUseUserInfoResponse_PrivacyScopeItem *originItem;

- (void).cxx_destruct;

@end
