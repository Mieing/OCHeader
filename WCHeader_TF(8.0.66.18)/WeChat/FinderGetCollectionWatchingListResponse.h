@class NSString, NSData, NSMutableArray, BaseResponse;

@interface FinderGetCollectionWatchingListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *collectionWatchingInfo;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *promptWording;
@property (nonatomic) unsigned int explicitCount;

+ (void)initialize;

@end
