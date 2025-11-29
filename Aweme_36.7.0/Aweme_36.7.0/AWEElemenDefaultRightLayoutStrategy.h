@class NSArray, NSString;

@interface AWEElemenDefaultRightLayoutStrategy : NSObject <AWEElementLayoutStrategyProtocol>

@property (retain, nonatomic) NSArray *layouts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)activateWithContext:(id)a0;

@end
