@class NSData, NSMutableArray, BaseResponse;

@interface FinderGetCollectionListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *collectionInfo;
@property (nonatomic) unsigned int collectionCount;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
