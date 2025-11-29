@class NSString, NSNumber;

@interface AWEECOMIMBenedictionMsgModel : AWEECOMIMBaseMsgModel

@property (copy, nonatomic) NSString *url;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (copy, nonatomic) NSString *latestMsgId;
@property (copy, nonatomic) NSString *latestMsgConversationId;
@property (retain, nonatomic) NSNumber *msgCreateTime;
@property (copy, nonatomic) NSString *localMsgId;

+ (Class)cellClass;

- (id)trackCellDisplayUniqueKey;
- (void).cxx_destruct;

@end
