@class NSString, NSDictionary;

@interface IESLiveCubeAction : NSObject

@property (retain, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *userInfo;

+ (id)packWithKey:(id)a0 value:(id)a1;
+ (id)packWithKey:(id)a0 value:(id)a1 userInfo:(id)a2;
+ (id)packWithEventname:(id)a0 value:(id)a1 userInfo:(id)a2;

- (void).cxx_destruct;

@end
