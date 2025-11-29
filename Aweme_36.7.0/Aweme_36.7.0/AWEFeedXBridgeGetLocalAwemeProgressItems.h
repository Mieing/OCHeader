@class NSString, NSNumber;

@interface AWEFeedXBridgeGetLocalAwemeProgressItems : BDXBridgeModel

@property (copy, nonatomic) NSString *awemeId;
@property (retain, nonatomic) NSNumber *playProgress;
@property (retain, nonatomic) NSNumber *lastModifiedTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
