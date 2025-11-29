@class NSString, NSData, NSDictionary;

@interface BDSHViewBuildConfig : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSDictionary *componentData;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (copy, nonatomic) id /* block */ callback;
@property (nonatomic) BOOL isLoadGeckoAsync;

- (void).cxx_destruct;

@end
