@class NSString;

@interface AWEIMFeedUnreadSharedRecordModel : AWEBaseApiModel

@property (nonatomic) long long serverMessageID;
@property (nonatomic) long long fromUID;
@property (nonatomic) long long conversionShortID;
@property (copy, nonatomic) NSString *conversionID;
@property (copy, nonatomic) NSString *messageID;
@property (nonatomic) long long attachMsgID;
@property (copy, nonatomic) NSString *attachMsgContent;
@property (copy, nonatomic) NSString *shareId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
