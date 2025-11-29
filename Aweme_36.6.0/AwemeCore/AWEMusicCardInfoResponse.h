@class NSString;

@interface AWEMusicCardInfoResponse : AWEBaseApiModel

@property (retain, nonatomic) NSString *originText;
@property (retain, nonatomic) NSString *artistName;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
