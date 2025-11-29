@class NSString, NSData;

@interface InnerMsgInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int innerId;
@property (nonatomic) unsigned int groupFlag;
@property (nonatomic) unsigned int lowergroupFlag;
@property (nonatomic) unsigned int opFlag;
@property (nonatomic) int weight;
@property (retain, nonatomic) NSString *reportData;
@property (nonatomic) unsigned int cardOriginOrder;
@property (retain, nonatomic) NSString *recReason;
@property (nonatomic) BOOL cardReddot;
@property (nonatomic) unsigned int originScore;
@property (nonatomic) unsigned int foldFlag;
@property (nonatomic) BOOL cardFloatBox;
@property (retain, nonatomic) NSData *reportInfo;
@property (nonatomic) unsigned int ensurePos;
@property (nonatomic) unsigned int realnameType;
@property (nonatomic) BOOL clickBiz14Days;
@property (nonatomic) BOOL forceSmallPic;
@property (nonatomic) unsigned int reddotValue;
@property (nonatomic) unsigned int hideFlag;
@property (nonatomic) unsigned int privilegeFlag;
@property (nonatomic) unsigned int flag;
@property (nonatomic) unsigned int cardFloatBoxType;

+ (void)initialize;

@end
