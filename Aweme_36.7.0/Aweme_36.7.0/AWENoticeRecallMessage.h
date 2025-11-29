@class NSString;

@interface AWENoticeRecallMessage : NSObject

@property (copy, nonatomic) NSString *groupId;
@property (copy, nonatomic) NSString *noticeId;
@property (copy, nonatomic) NSString *noticeMessage;
@property (copy, nonatomic) NSString *theNewNoticeMessage;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *aweDesc;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
