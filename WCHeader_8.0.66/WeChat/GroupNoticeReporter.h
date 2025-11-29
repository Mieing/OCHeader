@class NSString;

@interface GroupNoticeReporter : NSObject

@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NSString *chatName;
@property (nonatomic) unsigned int role;
@property (nonatomic) unsigned int memberCount;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *noticeId;

+ (id)reporter;
+ (void)reportAction:(unsigned int)a0;
+ (void)report_22613:(id)a0;

- (void)report;
- (void).cxx_destruct;

@end
