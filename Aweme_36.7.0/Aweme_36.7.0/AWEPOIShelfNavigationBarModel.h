@class NSString, NSArray;

@interface AWEPOIShelfNavigationBarModel : NSObject

@property (nonatomic) BOOL isShowShelfNavBar;
@property (copy, nonatomic) NSString *titleIconUrl;
@property (nonatomic) double titleIconWidth;
@property (nonatomic) double titleIconHeight;
@property (nonatomic) unsigned long long rightItemType;
@property (retain, nonatomic) NSArray *recommendDesctions;
@property (copy, nonatomic) NSString *deliveryTimeIconUrl;
@property (nonatomic) double deliveryTimeIconWidth;
@property (nonatomic) double deliveryTimeIconHeight;
@property (copy, nonatomic) NSString *deliveryTimeText;
@property (copy, nonatomic) NSString *keyUserEntryIconUrl;
@property (nonatomic) double keyUserEntryIconWidth;
@property (nonatomic) double keyUserEntryIconHeight;
@property (copy, nonatomic) NSString *keyUserEntryText;
@property (retain, nonatomic) NSString *keyUserEntryArrowUrl;
@property (nonatomic) double keyUserEntryArrowWidth;
@property (nonatomic) double keyUserEntryArrowHeight;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
