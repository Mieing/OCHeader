@class NSArray, WCPayNewBindCardFavorInfo;

@interface WCPayBankCardFavorInfo : NSObject

@property (retain, nonatomic) NSArray *bind_serial_favor_info_list;
@property (retain, nonatomic) WCPayNewBindCardFavorInfo *wcpay_new_bind_card_info;

- (void).cxx_destruct;

@end
