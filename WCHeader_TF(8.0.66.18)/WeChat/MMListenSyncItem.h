@class NSString, NSMutableArray, MMListenSyncJumpInfo;

@interface MMListenSyncItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *syncId;
@property (nonatomic) int type;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSMutableArray *userInfos;
@property (retain, nonatomic) NSMutableArray *coverInfos;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) MMListenSyncJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *reddotSessionBuffer;

+ (void)initialize;

@end
