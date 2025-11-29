@class NSString, NSNumber, NSDictionary;

@interface BDXBridgeKefuGetGuideInfoGuideInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSNumber *connection;
@property (copy, nonatomic) NSString *pageName;
@property (retain, nonatomic) NSNumber *touchCountAll;
@property (copy, nonatomic) NSDictionary *rtcCommandInfo;
@property (copy, nonatomic) NSDictionary *guideExtraInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
