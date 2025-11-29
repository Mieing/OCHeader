@class XMBaseContactData, NSMutableArray, NSString;

@interface XMBaseSendMailData : WXPBGeneratedMessage

@property (nonatomic) int sendtype;
@property (retain, nonatomic) XMBaseContactData *from;
@property (retain, nonatomic) NSMutableArray *tolist;
@property (retain, nonatomic) NSMutableArray *cclist;
@property (retain, nonatomic) NSMutableArray *bcclist;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableArray *attlist;
@property (retain, nonatomic) NSMutableArray *bigAttlist;
@property (retain, nonatomic) NSString *oldmailid;
@property (nonatomic) BOOL savesent;

+ (void)initialize;

@end
