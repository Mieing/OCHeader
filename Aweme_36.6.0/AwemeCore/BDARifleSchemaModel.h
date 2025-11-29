@class NSString, NSNumber, NSDictionary;

@interface BDARifleSchemaModel : NSObject

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundle;
@property (copy, nonatomic) NSString *surl;
@property (nonatomic) long long dynamic;
@property (nonatomic) BOOL useGeckoFirst;
@property (copy, nonatomic) NSString *group;
@property (nonatomic) BOOL disableShare;
@property (nonatomic) long long threadStrategy;
@property (retain, nonatomic) NSNumber *enableCanvas;
@property (copy, nonatomic) NSDictionary *queryItems;
@property (retain, nonatomic) NSNumber *fontScale;
@property (copy, nonatomic) NSString *originURLString;

- (void).cxx_destruct;

@end
