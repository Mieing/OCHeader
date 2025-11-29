@class NSString;

@interface AWEAwemeVideoMuteModel : AWEBaseApiModel

@property (nonatomic) BOOL isMute;
@property (copy, nonatomic) NSString *muteMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
