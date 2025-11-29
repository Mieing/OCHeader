@class NSString, NSNumber;

@interface AWETFLinkResponse : AWEBaseApiModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *msg;
@property (retain, nonatomic) NSNumber *errCode;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
