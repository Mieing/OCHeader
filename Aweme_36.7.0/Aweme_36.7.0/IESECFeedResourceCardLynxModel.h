@class NSString, NSData, NSDictionary;

@interface IESECFeedResourceCardLynxModel : IESECFeedResourceCardBaseNode

@property (nonatomic) long long style;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *lynxData;
@property (retain, nonatomic) NSData *lynxTemplate;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (retain, nonatomic) NSDictionary *trackerData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
