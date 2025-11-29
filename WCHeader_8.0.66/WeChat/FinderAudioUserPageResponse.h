@class BaseResponse, MMListenCategoryItem, FinderCollectionListInfo, NSData, FinderLiteAppParam, FinderContact, NSMutableArray;

@interface FinderAudioUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *object;
@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int totalCount;
@property (retain, nonatomic) NSMutableArray *audioItems;
@property (retain, nonatomic) MMListenCategoryItem *allAudioList;
@property (retain, nonatomic) FinderCollectionListInfo *collectionListInfo;
@property (nonatomic) unsigned long long ctrlFlag;
@property (retain, nonatomic) FinderLiteAppParam *liteAppParam;
@property (retain, nonatomic) FinderLiteAppParam *manageLiteAppParam;

+ (void)initialize;

@end
