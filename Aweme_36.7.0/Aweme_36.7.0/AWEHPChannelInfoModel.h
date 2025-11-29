@class NSString;

@interface AWEHPChannelInfoModel : NSObject

@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *parentTabId;
@property (nonatomic) long long topBarShowIndex;
@property (copy, nonatomic) NSString *topBarShowTabId;
@property (nonatomic) BOOL isTopTabSelected;
@property (nonatomic) long long bottomBarShowIndex;
@property (copy, nonatomic) NSString *bottomBarShowTabId;
@property (nonatomic) BOOL isBottomTabSelected;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
