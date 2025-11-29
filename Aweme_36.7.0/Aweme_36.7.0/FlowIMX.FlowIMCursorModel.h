@class NSString;

@interface FlowIMX.FlowIMCursorModel : NSObject

@property (nonatomic) long long index;
@property (nonatomic) long long limit;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isFromColdLaunch;
@property (nonatomic, readonly) NSString *description;

- (id)initWithIndex:(long long)a0 limit:(long long)a1 type:(long long)a2;
- (id)init;

@end
