@class NSString, NSArray;

@interface AWELiveAnnouncement : AWEBaseApiModel

@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *announceType;
@property (readonly, nonatomic) BOOL isSingleAnnounce;
@property (copy, nonatomic) NSString *appointmentId;
@property (retain, nonatomic) NSArray *productInfos;

+ (id)productInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
