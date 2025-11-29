@class NSString, NSArray;

@interface APCDTOEditFlowControl : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *publishButtonTitleInEditPage;
@property (copy, nonatomic) NSString *publishButtonImageNameInEditPage;
@property (copy, nonatomic) id /* block */ publishButtonBlockInEditPage;
@property (copy, nonatomic) id /* block */ editorWithPublishBlock;
@property (copy, nonatomic) id /* block */ editorBackBlock;
@property (copy, nonatomic) id /* block */ publishButtonBlockInPublishPage;
@property (retain, nonatomic) NSArray *excluedBarItemList;
@property (retain, nonatomic) NSArray *excluedStickerTags;
@property (nonatomic) BOOL isHidePublishButton;
@property (nonatomic) BOOL isHideBackAlert;
@property (nonatomic) BOOL ignoreRightBarUnfoldLimit;
@property (nonatomic) BOOL disablePublishSetting;
@property (nonatomic) BOOL isRestore;
@property (copy, nonatomic) NSString *actionTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
