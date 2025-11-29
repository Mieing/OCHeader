@class NSString, CardMiniAppInfo;

@interface PageTicketJumpElement : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *pageTicketJumpElementWording;
@property (retain, nonatomic) NSString *pageTicketJumpElementIcon;
@property (retain, nonatomic) NSString *pageTicketJumpElementSkipWording;
@property (nonatomic) int pageTicketJumpElementOpType;
@property (retain, nonatomic) NSString *pageTicketJumpElementUrl;
@property (retain, nonatomic) CardMiniAppInfo *pageTicketJumpElementMiniAppInfo;
@property (retain, nonatomic) NSString *pageTicketJumpElementNativeUrl;

+ (void)initialize;

@end
