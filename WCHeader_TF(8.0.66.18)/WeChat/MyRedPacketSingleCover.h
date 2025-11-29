@class NSString, FinderJumpInfo;

@interface MyRedPacketSingleCover : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *coverImgUrl;
@property (retain, nonatomic) NSString *receiveUrl;
@property (nonatomic) unsigned int remain;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (void)initialize;

@end
