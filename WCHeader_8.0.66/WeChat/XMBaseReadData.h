@class XMReadMailTips, NSString, XMBaseContactData, NSMutableArray;

@interface XMBaseReadData : WXPBGeneratedMessage

@property (nonatomic) unsigned int size;
@property (retain, nonatomic) NSString *charset;
@property (retain, nonatomic) NSString *mailid;
@property (retain, nonatomic) XMBaseContactData *fromaddr;
@property (retain, nonatomic) NSMutableArray *tolist;
@property (retain, nonatomic) NSMutableArray *cclist;
@property (retain, nonatomic) NSMutableArray *bcclist;
@property (retain, nonatomic) NSString *datetime;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *contenttype;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableArray *normalattachlist;
@property (retain, nonatomic) NSMutableArray *bigattachkist;
@property (retain, nonatomic) XMReadMailTips *tips;

+ (void)initialize;

@end
