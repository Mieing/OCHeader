@class NSString, NSArray, NSDictionary, NSDate;
@protocol TIMXMessageModelProtocol;

@interface TIMXMessageSendResponse : TIMXPBNSendMessageResponseBody

@property (copy, nonatomic) NSString *logID;
@property (copy, nonatomic) NSArray *requestToMonitorArray;
@property (copy, nonatomic) NSArray *processDurationMonitorArray;
@property (retain, nonatomic) id<TIMXMessageModelProtocol> message;
@property (nonatomic) BOOL isChatRoom;
@property (retain, nonatomic) NSDate *localCreatedAt;
@property (copy, nonatomic) NSDictionary *ext;

- (id)initWithPBBody:(id)a0;
- (void).cxx_destruct;

@end
