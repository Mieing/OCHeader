@class NSString, BDPModel;

@interface BDPAppLoadBaseTask : NSObject

@property (readonly, nonatomic) NSString *appId;
@property (nonatomic) long long readType;
@property (nonatomic) long long priority;
@property (retain, nonatomic) BDPModel *model;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)init;

@end
