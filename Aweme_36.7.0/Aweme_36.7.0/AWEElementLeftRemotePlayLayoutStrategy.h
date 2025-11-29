@class NSArray, NSString;

@interface AWEElementLeftRemotePlayLayoutStrategy : NSObject <AWEElementLayoutStrategyProtocol>

@property (retain, nonatomic) NSArray *layouts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)activateWithContext:(id)a0;

- (id)elementGroupLayoutWithContext:(id)a0;
- (void).cxx_destruct;

@end
