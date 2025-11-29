@class NSDictionary, IESLiveFormatGiveGiftUserInfo, NSString;

@interface IESLiveFormatSendGiftConfiguration : NSObject

@property (nonatomic) long long giftId;
@property (nonatomic) long long giftCount;
@property (nonatomic) long long unitDiamond;
@property (nonatomic) long long buffLevel;
@property (retain, nonatomic) IESLiveFormatGiveGiftUserInfo *toUser;
@property (copy, nonatomic) NSDictionary *extraTrackDic;
@property (copy, nonatomic) NSDictionary *extraSendDic;
@property (copy, nonatomic) NSString *sendSource;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithGiftId:(long long)a0 count:(long long)a1 toUser:(id)a2 unitDiamond:(long long)a3 sendSource:(id)a4;
- (void).cxx_destruct;

@end
