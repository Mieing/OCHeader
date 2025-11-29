@class NSString;

@interface IESGCPPBGameDetailReserveButtonV2 : GPBMessage

@property (nonatomic) long long reservedStatus;
@property (nonatomic) long long giftNum;
@property (nonatomic) long long supportPlatforms;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *autoAction;
@property (nonatomic) long long interactiveStyle;

+ (id)descriptor;

@end
