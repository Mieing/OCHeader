@class NSString, NSArray, InteractionData, MemberQAUserPagePreviewData, FinderPoiInteractionInfo, NSMutableArray, WCFinderContact;

@interface WCFinderContactPreviewData : NSObject <PBCoding>

@property (retain, nonatomic) WCFinderContact *contact;
@property (nonatomic) BOOL showFeedPreview;
@property (retain, nonatomic) NSArray *dataItems;
@property (nonatomic) unsigned long long expectNextFetchTimestamp;
@property (nonatomic) BOOL showLikedList;
@property (retain, nonatomic) NSArray *likeListDataItem;
@property (retain, nonatomic) InteractionData *interactionData;
@property (retain, nonatomic) NSMutableArray *previewItems;
@property (retain, nonatomic) MemberQAUserPagePreviewData *memberQaData;
@property (retain, nonatomic) FinderPoiInteractionInfo *poiInteractionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_contact;
+ (void)PBArrayAdd_showFeedPreview;
+ (void)PBArrayAdd_dataItems;
+ (void)PBArrayAdd_expectNextFetchTimestamp;
+ (void)PBArrayAdd_showLikedList;
+ (void)PBArrayAdd_likeListDataItem;
+ (void)PBArrayAdd_interactionData;
+ (void)PBArrayAdd_previewItems;
+ (void)PBArrayAdd_memberQaData;
+ (void)PBArrayAdd_poiInteractionInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
