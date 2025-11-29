@class NSString, NSObject;

@interface AWEECBcmNetworkCheckPointResult : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject *value;
@property (nonatomic) BOOL checkResult;

- (id)initWithName:(id)a0 value:(id)a1 checkResult:(BOOL)a2;
- (void).cxx_destruct;

@end
