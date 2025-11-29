@class NSString, NSDate;

@interface TIMXOMessagePropertyItem : NSObject <IESIMMessagePropertyItemProtocol>

@property (copy, nonatomic) NSString *idempotentID;
@property (nonatomic) long long sender;
@property (copy, nonatomic) NSString *senderSecID;
@property (retain, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *idempotentID;
@property (nonatomic) long long sender;
@property (copy, nonatomic) NSString *senderSecID;
@property (retain, nonatomic) NSDate *createdAt;
@property (copy, nonatomic) NSString *value;

- (void).cxx_destruct;

@end
