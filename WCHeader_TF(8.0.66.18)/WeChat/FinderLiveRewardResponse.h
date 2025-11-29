@class FinderLiveGiftAttackCtx, NSString, FinderLiveErrorPage, NSData, FinderLivePkValueExtraCtx, FinderLiveGiftRandomCtx, BaseResponse;

@interface FinderLiveRewardResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *billNo;
@property (retain, nonatomic) NSData *respBuff;
@property (retain, nonatomic) FinderLiveErrorPage *errorPage;
@property (retain, nonatomic) FinderLiveGiftRandomCtx *randomCtx;
@property (retain, nonatomic) FinderLiveGiftAttackCtx *attackCtx;
@property (retain, nonatomic) FinderLivePkValueExtraCtx *extraCtx;

+ (void)initialize;

@end
