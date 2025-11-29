@class NSData, NSMutableArray;

@interface NewLifeGetHeartLikeListResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *objectList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
