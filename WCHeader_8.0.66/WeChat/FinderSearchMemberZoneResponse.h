@class NSData, NSMutableArray, BaseResponse;

@interface FinderSearchMemberZoneResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *searchResults;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int continueFlag;

+ (void)initialize;

@end
