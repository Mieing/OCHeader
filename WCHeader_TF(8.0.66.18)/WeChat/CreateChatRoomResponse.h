@class SKBuiltinBuffer_t, SKBuiltinString_t, NSString, NSMutableArray, BaseResponse;

@interface CreateChatRoomResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinString_t *topic;
@property (retain, nonatomic) SKBuiltinString_t *pyinitial;
@property (retain, nonatomic) SKBuiltinString_t *quanPin;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (retain, nonatomic) SKBuiltinString_t *chatRoomName;
@property (retain, nonatomic) SKBuiltinBuffer_t *imgBuf;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;

+ (void)initialize;

@end
