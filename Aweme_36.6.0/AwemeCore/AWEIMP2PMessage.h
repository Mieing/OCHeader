@class NSString, NSDictionary;

@interface AWEIMP2PMessage : NSObject

@property (copy, nonatomic) NSString *fromUid;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long type;
@property (nonatomic) long long createTime;
@property (copy, nonatomic) NSDictionary *ext;

- (id)initWithContentDict:(id)a0;
- (void).cxx_destruct;

@end
