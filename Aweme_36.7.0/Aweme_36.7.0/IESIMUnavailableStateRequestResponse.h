@class NSDictionary, IESIMUnavailableStateRequestContext, NSArray;

@interface IESIMUnavailableStateRequestResponse : NSObject

@property (readonly, nonatomic) BOOL success;
@property (retain, nonatomic) IESIMUnavailableStateRequestContext *requestContext;
@property (copy, nonatomic) NSDictionary *awemeMap;
@property (copy, nonatomic) NSDictionary *stateMap;
@property (copy, nonatomic) NSArray *missingAwemeIds;
@property (nonatomic) unsigned long long fromAPI;

- (void).cxx_destruct;
- (id)initWithSuccess:(BOOL)a0;

@end
