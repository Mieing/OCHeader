@class NSNumber, NSString;

@interface AWEIMMixPhotoResponseModel : AWEBaseApiModel

@property (copy, nonatomic) NSNumber *playID;
@property (copy, nonatomic) NSNumber *messageID;
@property (copy, nonatomic) NSString *clientMessageID;
@property (copy, nonatomic) NSNumber *shouldDismissShootPage;
@property (copy, nonatomic) NSNumber *serverReceiveTime;
@property (copy, nonatomic) NSNumber *serverSendMessageTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
