@class NSString, NSDictionary;

@interface AWELeftSideBarCellEntranceClickTrackModel : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *groupID;
@property (nonatomic) long long clickDuration;
@property (nonatomic) long long clickOrder;
@property (copy, nonatomic) NSString *barTitle;
@property (copy, nonatomic) NSString *barID;
@property (copy, nonatomic) NSString *barStatus;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *entranceStatus;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *itemTitle;
@property (nonatomic) long long itemOrder;
@property (copy, nonatomic) NSDictionary *timorBusinessParams;
@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *modulePos;
@property (copy, nonatomic) NSString *displayingSubtitleText;

- (void).cxx_destruct;

@end
