@class NSString;

@interface WCRecommendMetaInfo : NSObject

@property (nonatomic) int recommendType;
@property (nonatomic) int source;
@property (retain, nonatomic) NSString *expId;
@property (retain, nonatomic) NSString *contentXml;
@property (retain, nonatomic) NSString *expOriginSnsId;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
