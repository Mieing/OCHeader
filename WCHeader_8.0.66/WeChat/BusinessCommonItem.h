@class BusinessActionInfo, NSString, BusinessDetailInfo, BusinessExtendInfo;

@interface BusinessCommonItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) BusinessDetailInfo *detailInfo;
@property (retain, nonatomic) BusinessExtendInfo *extendInfo;
@property (retain, nonatomic) BusinessActionInfo *actionInfo;

+ (void)initialize;

@end
