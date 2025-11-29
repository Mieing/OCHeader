@class NSNumber, NSString;

@interface AFDBookBulletMsgResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *msgType;
@property (copy, nonatomic) NSString *msgContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
