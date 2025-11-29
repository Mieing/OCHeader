@class NSString, NSDictionary;

@interface AWELeftSideBarCellSubEntranceShowModel : NSObject

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

- (void).cxx_destruct;

@end
