@class NSString, NSDictionary;

@interface AWESearchBaseContainerNetworkConfig : NSObject

@property (nonatomic) long long requestDataCount;
@property (nonatomic) BOOL customAnylyseResponse;
@property (nonatomic) BOOL netStepSign;
@property (nonatomic) BOOL needPostMethod;
@property (nonatomic) unsigned long long flowRequestType;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) NSDictionary *headerField;

- (void).cxx_destruct;
- (id)init;

@end
