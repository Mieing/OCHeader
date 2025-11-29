@class NSString, FinderObject, FinderJumpInfo, NSData, BaseResponse;

@interface FinderLiveSelectGoResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int flag;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderObject *object;
@property (nonatomic) unsigned long long functionType;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSData *flagBuffer;
@property (nonatomic) unsigned int scanScene;

+ (void)initialize;

@end
