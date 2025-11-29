@class CMailContact, NSMutableArray, NSString;

@interface CMail : NSObject

@property (retain, nonatomic) CMailContact *from;
@property (retain, nonatomic) NSMutableArray *tolist;
@property (retain, nonatomic) NSMutableArray *cclist;
@property (retain, nonatomic) NSMutableArray *bcclist;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSString *datetime;
@property (retain, nonatomic) NSString *contentType;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableArray *attachlist;
@property (nonatomic) int tipColor;
@property (retain, nonatomic) NSString *tipWording;
@property (retain, nonatomic) NSString *oldMailId;
@property (nonatomic) unsigned int sendType;

+ (id)stringForContacts:(id)a0;

- (void)parseFromXML:(id)a0;
- (id)initWithXml:(id)a0;
- (id)description;
- (id)briefDesc;
- (id)appendToNewMailContent:(id)a0;
- (void).cxx_destruct;

@end
