@class HTSLiveGiftLiteTrayInfo, HTSLiveGiftInfo;

@interface IESLiveRevenueInteractTrayNode : NSObject

@property (nonatomic) long long totalCount;
@property (retain, nonatomic) HTSLiveGiftInfo *giftInfo;
@property (retain, nonatomic) HTSLiveGiftLiteTrayInfo *trayInfo;

- (void)updateTotalCount:(long long)a0;
- (id)initWithGiftInfo:(id)a0 trayInfo:(id)a1;
- (void).cxx_destruct;

@end
