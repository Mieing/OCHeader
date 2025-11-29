@class NSString;

@interface ClickCommandRequestInfo : NSObject

@property (retain, nonatomic) NSString *m_magic;
@property (retain, nonatomic) NSString *m_id;
@property (retain, nonatomic) NSString *m_key;
@property (retain, nonatomic) NSString *m_status;
@property (retain, nonatomic) NSString *m_content;
@property (nonatomic) long long m_type;
@property (nonatomic) long long m_actionType;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
