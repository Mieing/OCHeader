@class NSData, NSMutableArray, BaseResponse;

@interface FinderPaidCollectionUserPageResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *collectionInfo;
@property (nonatomic) unsigned int totalCount;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
