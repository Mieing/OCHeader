@class NSArray, NSMutableArray, NSString;

@interface DraftController : NSObject <NSCoding>

@property (retain, nonatomic) NSMutableArray *m_arrReceiver;
@property (retain, nonatomic) NSMutableArray *m_arrCc;
@property (retain, nonatomic) NSMutableArray *m_arrBcc;
@property (retain, nonatomic) NSArray *m_storedMailAttachments;
@property (retain, nonatomic) NSString *m_topic;
@property (retain, nonatomic) NSString *m_content;

+ (id)readAllDraft:(id)a0;
+ (BOOL)writeAllDraft:(id)a0 mailID:(id)a1;
+ (void)deleteDraft:(id)a0;
+ (void)deleteAllDraft;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
