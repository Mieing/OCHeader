@class NSString, NSMutableDictionary;

@interface TIMXOP2PMessage : NSObject <IESIMP2PMessageProtocol, TIMXP2PMessageProtocol>

@property (readonly, nonatomic) long long sendType;
@property (readonly, nonatomic) long long sender;
@property (readonly, copy, nonatomic) NSString *conversationId;
@property (readonly, nonatomic) int messageType;
@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) NSMutableDictionary *ext;
@property (readonly, nonatomic) long long createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long sendType;
@property (nonatomic) long long sender;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) int messageType;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSMutableDictionary *ext;
@property (nonatomic) long long createTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
