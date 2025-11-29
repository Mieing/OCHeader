@class NSMutableArray, WCAdLookbookCardReportItem;

@interface WCAdLookbookCardReportInfo : NSObject

@property (retain, nonatomic) NSMutableArray *reportItemList;
@property (nonatomic) unsigned int scrollCount;
@property (nonatomic) unsigned int slideCount;
@property (retain, nonatomic) WCAdLookbookCardReportItem *brandNewReportItem;

- (void).cxx_destruct;

@end
