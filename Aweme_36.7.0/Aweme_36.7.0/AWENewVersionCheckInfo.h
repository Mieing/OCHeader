@class NSNumber, NSString;

@interface AWENewVersionCheckInfo : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *tipVersionCode;
@property (retain, nonatomic) NSNumber *latency;
@property (nonatomic) BOOL hasBeta;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *forceUpdate;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) NSNumber *inhouse;
@property (retain, nonatomic) NSNumber *realVersionCode;
@property (copy, nonatomic) NSString *whatsNew;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
