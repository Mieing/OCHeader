@class GPBInt32Int64Dictionary, NSString, HTSLiveGiftPanelOperation, HTSLiveImage, PageInfo, NSMutableArray, PageNameStyleInfo;

@interface GiftPage : IESLivePBBaseMessage

@property (nonatomic) int pageType;
@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSMutableArray *giftsArray;
@property (readonly, nonatomic) unsigned long long giftsArray_Count;
@property (nonatomic) BOOL display;
@property (retain, nonatomic) HTSLiveGiftPanelOperation *pageOperation;
@property (nonatomic) BOOL hasPageOperation;
@property (copy, nonatomic) NSString *eventName;
@property (retain, nonatomic) HTSLiveImage *backgroundImage;
@property (nonatomic) BOOL hasBackgroundImage;
@property (retain, nonatomic) PageInfo *pageInfo;
@property (nonatomic) BOOL hasPageInfo;
@property (retain, nonatomic) HTSLiveImage *multipleSelectedReceiverImage;
@property (nonatomic) BOOL hasMultipleSelectedReceiverImage;
@property (retain, nonatomic) NSMutableArray *sectionInfoArray;
@property (readonly, nonatomic) unsigned long long sectionInfoArray_Count;
@property (retain, nonatomic) PageNameStyleInfo *pageNameStyleInfo;
@property (nonatomic) BOOL hasPageNameStyleInfo;
@property (retain, nonatomic) NSMutableArray *remainingGiftsArray;
@property (readonly, nonatomic) unsigned long long remainingGiftsArray_Count;
@property (retain, nonatomic) GPBInt32Int64Dictionary *forceInsertIndex;
@property (readonly, nonatomic) unsigned long long forceInsertIndex_Count;
@property (retain, nonatomic) NSMutableArray *liteGiftsArray;
@property (readonly, nonatomic) unsigned long long liteGiftsArray_Count;
@property (retain, nonatomic) NSMutableArray *topicsArray;
@property (readonly, nonatomic) unsigned long long topicsArray_Count;
@property (retain, nonatomic) NSMutableArray *scrollPageNamesArray;
@property (readonly, nonatomic) unsigned long long scrollPageNamesArray_Count;
@property (nonatomic) long long sortStrategy;

+ (id)descriptor;

@end
