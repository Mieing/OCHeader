@class NSMutableArray, BaseResponse;

@interface FinderLiveGetRoomManagerResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *roomManagerList;
@property (nonatomic) unsigned int allowAddCountLimit;

+ (void)initialize;

@end
