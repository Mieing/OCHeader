@class NSString;

@interface AnchorLocationPoiInfo : IESLivePBBaseMessage

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long poiId;
@property (copy, nonatomic) NSString *poiIdStr;
@property (copy, nonatomic) NSString *text;

+ (id)descriptor;

@end
