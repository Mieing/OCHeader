@class NSString, NSDictionary;

@interface AWELeftSideBarCellSubEntranceClickModel : NSObject

@property (copy, nonatomic) NSString *barID;
@property (copy, nonatomic) NSString *barTitle;
@property (copy, nonatomic) NSString *barStatus;
@property (nonatomic) long long redDotStyle;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *itemTitle;
@property (nonatomic) long long itemOrder;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *modulePos;
@property (copy, nonatomic) NSString *displayingSubtitleText;
@property (nonatomic) BOOL isOpenSecondPageVC;

- (void).cxx_destruct;

@end
