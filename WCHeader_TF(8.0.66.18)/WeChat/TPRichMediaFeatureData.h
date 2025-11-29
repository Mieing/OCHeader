@class NSString, NSArray;

@interface TPRichMediaFeatureData : NSObject

@property (copy, nonatomic) NSString *featureType;
@property (copy, nonatomic) NSString *env;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *featureContents;

- (void).cxx_destruct;

@end
