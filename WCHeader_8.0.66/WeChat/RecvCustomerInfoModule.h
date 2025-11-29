@class NSString, RecvChannelJumpInfo;

@interface RecvCustomerInfoModule : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *leftSubtitle;
@property (retain, nonatomic) NSString *leftWording;
@property (retain, nonatomic) NSString *rightSubtitle;
@property (retain, nonatomic) NSString *rightWording;
@property (retain, nonatomic) RecvChannelJumpInfo *jumpInfo;

+ (void)initialize;

@end
