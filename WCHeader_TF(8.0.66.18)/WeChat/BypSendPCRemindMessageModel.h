@class NSString;

@interface BypSendPCRemindMessageModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSString *remindId;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *busiType;
@property (copy, nonatomic) NSString *startDate;
@property (copy, nonatomic) NSString *expireDate;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *descType;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *sendTime;

+ (id)initWithDict:(id)a0;

- (id)getXml;
- (void).cxx_destruct;

@end
