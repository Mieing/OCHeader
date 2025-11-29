@class NSString, NSArray, FlowListItemData;

@interface BrandFlowListBaseCellModel : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long fromScene;
@property (retain, nonatomic) NSString *m_nsUserName;
@property (nonatomic) BOOL needSupplyData;
@property (retain, nonatomic) FlowListItemData *flutterItemData;
@property (retain, nonatomic) NSString *recInfo;
@property (retain, nonatomic) NSArray *negativeFeedbackReason;
@property (retain, nonatomic) NSString *negativeFeedbackTitle;
@property (retain, nonatomic) NSString *recommendExtraData;

- (id)getArticleUrl;
- (id)getFinderFeedContentVM;
- (id)finderExportId;
- (void)refreshWithFinderDataItem:(id)a0;
- (unsigned int)flowListItemTypeForReport;
- (unsigned int)itemShowType;
- (void)fillRecommendProperty:(id)a0;
- (void).cxx_destruct;

@end
