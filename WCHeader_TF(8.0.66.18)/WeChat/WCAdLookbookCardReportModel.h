@class NSMutableArray, WCAdLookbookCardReportItemModel;

@interface WCAdLookbookCardReportModel : WCAdChannelReportExtendInfoModel

@property (nonatomic) unsigned int scrollCount;
@property (nonatomic) unsigned int slideCount;
@property (retain, nonatomic) NSMutableArray *reportItemList;
@property (retain, nonatomic) WCAdLookbookCardReportItemModel *brandNewItem;

- (void).cxx_destruct;

@end
