@class NSString, NSData;

@interface FuncMsgExtInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tipsId;
@property (nonatomic) long long newMsgId;
@property (retain, nonatomic) NSData *tabTipsByPassInfo;
@property (retain, nonatomic) NSString *reportExtInfo;

+ (void)initialize;

@end
