@class NSString, NSArray, NSDictionary;

@interface AWESolariaNearLineClientInfo : NSObject

@property (copy, nonatomic) NSString *messageType;
@property (retain, nonatomic) NSArray *nearLineInfoList;
@property (retain, nonatomic) NSArray *sessionInfoList;
@property (retain, nonatomic) NSArray *dailyInfoList;
@property (retain, nonatomic) NSDictionary *extra;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
