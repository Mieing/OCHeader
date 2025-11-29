@class NSDictionary, NSError, NSString;

@interface IESECOrderListQueryCallBackDataObject : NSObject

@property (retain, nonatomic) NSDictionary *response;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *logID;
@property (nonatomic) long long requestScene;
@property (nonatomic) long long requestType;

- (void).cxx_destruct;

@end
