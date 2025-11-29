@class NSData, NSMutableArray, BaseResponse;

@interface StarSyncResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *keybuf;
@property (retain, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned int continueflag;
@property (nonatomic) unsigned int cmd;

+ (void)initialize;

@end
