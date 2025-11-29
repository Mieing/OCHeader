@class NSString, NSDictionary;

@interface AWELeftSideBarCellShowTrackModel : NSObject

@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *barID;
@property (copy, nonatomic) NSString *barTitle;
@property (copy, nonatomic) NSString *barStatus;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *entranceStatus;
@property (copy, nonatomic) NSDictionary *timorBusinessParams;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *itemTitle;
@property (nonatomic) long long itemOrder;
@property (copy, nonatomic) NSString *moduleID;
@property (copy, nonatomic) NSString *modulePos;

- (void).cxx_destruct;

@end
