@class NSArray, NSString;

@interface AWEFavoriteTabItemModel : NSObject <AWEProfileTabItemProtocol>

@property (nonatomic) BOOL isAggregationTab;
@property (nonatomic) long long subIndex;
@property (nonatomic) unsigned long long primaryType;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) unsigned long long exposeType;
@property (nonatomic) BOOL isAhead;
@property (copy, nonatomic) NSArray *subTabModel;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long count;
@property (nonatomic) BOOL showLock;
@property (nonatomic) BOOL showRedDot;
@property (copy, nonatomic) NSString *redDotAccessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
