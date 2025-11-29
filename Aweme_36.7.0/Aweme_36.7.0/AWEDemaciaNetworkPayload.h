@class NSString, NSDictionary, NSArray;

@interface AWEDemaciaNetworkPayload : NSObject

@property (copy, nonatomic) NSString *urlString;
@property (nonatomic) long long methodType;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL needCommonParams;
@property (copy, nonatomic) NSDictionary *headerField;
@property (retain, nonatomic) Class modelClass;
@property (copy, nonatomic) NSArray *targetAttributes;
@property (copy, nonatomic) id /* block */ responseBlock;
@property (nonatomic) BOOL enableCache;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) Class requestSerializer;
@property (retain, nonatomic) Class responseSerializer;

- (void).cxx_destruct;

@end
