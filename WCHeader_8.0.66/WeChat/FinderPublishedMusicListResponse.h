@class FinderMusicBaikeSummary, NSData, NSMutableArray, BaseResponse;

@interface FinderPublishedMusicListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *categoryItems;
@property (retain, nonatomic) FinderMusicBaikeSummary *summary;

+ (void)initialize;

@end
