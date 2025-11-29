@class NSArray, NSString, FinderJumpInfo;

@interface MMLiveStatistics : NSObject

@property (retain, nonatomic) NSArray *monumentalItems;
@property (retain, nonatomic) NSArray *highlightedItems;
@property (retain, nonatomic) NSArray *genericItems;
@property (retain, nonatomic) NSString *backgroundImageUri;
@property (retain, nonatomic) NSString *posterQrContent;
@property (retain, nonatomic) FinderJumpInfo *detailsPageJumpInfo;
@property (retain, nonatomic) NSString *monumentalItemsReportingId;

+ (id)statisticsWithBackendModel:(id)a0;

- (void).cxx_destruct;

@end
