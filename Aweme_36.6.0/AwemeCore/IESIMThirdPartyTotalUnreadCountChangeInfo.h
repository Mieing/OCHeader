@class NSMutableSet, NSMutableDictionary;

@interface IESIMThirdPartyTotalUnreadCountChangeInfo : NSObject

@property (retain, nonatomic) NSMutableSet *changedConvIDs;
@property (nonatomic) long long oldTotalUnreadCount;
@property (nonatomic) long long newTotalUnreadCount;
@property (retain, nonatomic) NSMutableDictionary *cidToOldUnreadCount;
@property (retain, nonatomic) NSMutableDictionary *cidToNewUnreadCount;
@property (nonatomic) long long oldImportantTotalUnreadCount;
@property (nonatomic) long long newImportantTotalUnreadCount;
@property (retain, nonatomic) NSMutableDictionary *cidToOldImportantUnreadCount;
@property (retain, nonatomic) NSMutableDictionary *cidToNewImportantUnreadCount;

- (void).cxx_destruct;

@end
