@class NSDictionary;

@interface APBCommand : NSObject

@property (nonatomic) long long commandType;
@property (retain, nonatomic) NSDictionary *params;

- (id)initWithCommandType:(long long)a0 withParams:(id)a1;
- (void).cxx_destruct;

@end
