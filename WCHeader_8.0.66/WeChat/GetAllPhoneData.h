@class NSMutableArray, WXAPhoneInfo;

@interface GetAllPhoneData : WXPBGeneratedMessage

@property (retain, nonatomic) WXAPhoneInfo *wxPhone;
@property (retain, nonatomic) NSMutableArray *customPhoneList;

+ (void)initialize;

@end
