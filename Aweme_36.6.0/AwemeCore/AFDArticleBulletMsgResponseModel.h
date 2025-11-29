@class NSNumber, NSString;

@interface AFDArticleBulletMsgResponseModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *msgType;
@property (copy, nonatomic) NSString *msgContent;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
