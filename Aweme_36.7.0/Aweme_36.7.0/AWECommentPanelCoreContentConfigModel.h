@class NSArray, NSDictionary, NSString, APCDTOComposerApi;

@interface AWECommentPanelCoreContentConfigModel : NSObject

@property (copy, nonatomic) NSArray *filterCellComponentsList;
@property (copy, nonatomic) NSDictionary *filterCellComponentsListUseCids;
@property (nonatomic) BOOL isFilterADComment;
@property (copy, nonatomic) id /* block */ isFilterVideoTitleComment;
@property (copy, nonatomic) id /* block */ isInsertVideoTitleComment;
@property (nonatomic) BOOL isApplyCustomAlters;
@property (copy, nonatomic) NSArray *customAltersClassNameList;
@property (copy, nonatomic) id /* block */ needShowNoMoreDataDefaultText;
@property (nonatomic) BOOL isApplyCustomHeaderCard;
@property (copy, nonatomic) NSString *customHeaderCardClassName;
@property (copy, nonatomic) NSString *footerTitleForExpand;
@property (copy, nonatomic) NSString *emptyStatusMainTitle;
@property (copy, nonatomic) NSString *emptyStatusSubtitle;
@property (copy, nonatomic) id /* block */ emptyStatusEnableShowPostCommentGuideButton;
@property (copy, nonatomic) NSString *emptyStatusGuideButtonTitle;
@property (retain, nonatomic) APCDTOComposerApi *creationComposerModel;
@property (nonatomic) BOOL enableCustomAwemePublishConfig;
@property (nonatomic) BOOL enablePublishLabel;
@property (copy, nonatomic) NSString *publishConfigExtraInfo;

- (id)customAltersList;
- (void).cxx_destruct;

@end
