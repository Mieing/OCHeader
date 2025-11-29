@class NSString, NSArray;

@interface AWEECOMIMRateServiceItemModel : NSObject

@property (copy, nonatomic) NSString *starsName;
@property (copy, nonatomic) NSString *iconName;
@property (copy, nonatomic) NSString *iconNameSelected;
@property (copy, nonatomic) NSString *iconNameUnSelected;
@property (copy, nonatomic) NSString *stars;
@property (copy, nonatomic) NSArray *tagTitleList;
@property (nonatomic) long long itemState;
@property (nonatomic) BOOL realSelected;
@property (nonatomic) long long type;
@property (nonatomic) long long maxCountForRow;

- (void).cxx_destruct;

@end
