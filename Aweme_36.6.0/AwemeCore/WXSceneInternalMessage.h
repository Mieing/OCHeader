@class NSString;

@interface WXSceneInternalMessage : NSObject

@property (retain, nonatomic) NSString *stateId;
@property (retain, nonatomic) NSString *stateToken;
@property (retain, nonatomic) NSString *stateUrl;
@property (retain, nonatomic) NSString *stateTitle;
@property (nonatomic) unsigned long long jumpType;

- (void).cxx_destruct;

@end
