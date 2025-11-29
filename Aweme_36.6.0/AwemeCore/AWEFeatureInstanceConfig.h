@class NSString, NSArray;

@interface AWEFeatureInstanceConfig : NSObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) Class featureClass;
@property (retain, nonatomic) id instance;
@property (copy, nonatomic) NSArray *injectionInfos;

- (void).cxx_destruct;

@end
