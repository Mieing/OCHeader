@class NSMutableArray, NSMutableDictionary;

@interface TIMXTotalUnreadCountChangeInfo : NSObject

@property (retain, nonatomic) NSMutableArray *changedConvIDs;
@property (retain, nonatomic) NSMutableDictionary *cidToOldUnreadCount;
@property (retain, nonatomic) NSMutableDictionary *cidToNewUnreadCount;
@property (nonatomic) long long oldTotalUnreadCount;
@property (nonatomic) long long newTotalUnreadCount;
@property (nonatomic) long long boxType;

- (void).cxx_destruct;

@end
