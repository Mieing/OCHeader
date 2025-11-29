@class NSString;

@interface AWEIMRTVListSelectBaseTableViewCellContext : NSObject

@property (nonatomic) unsigned long long awemeUpdateCount;
@property (nonatomic) BOOL couldSelected;
@property (nonatomic) BOOL changeToSelect;
@property (nonatomic, getter=isSearching) BOOL searching;
@property (nonatomic, getter=isMultiSelect) BOOL multiSelect;
@property (nonatomic) double lastActiveTime;
@property (readonly, nonatomic, getter=isOnline) BOOL online;
@property (readonly, copy, nonatomic) NSString *onlineIndicatorText;
@property (nonatomic) BOOL hideFriendLabel;

- (id)initWithUpdateCount:(unsigned long long)a0 couldSelected:(BOOL)a1 changeToSelect:(BOOL)a2 searching:(BOOL)a3 multiSelect:(BOOL)a4 lastActiveTime:(double)a5 hideFriendLabel:(BOOL)a6;
- (void).cxx_destruct;

@end
