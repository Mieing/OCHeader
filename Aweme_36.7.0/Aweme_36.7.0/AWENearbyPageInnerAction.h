@class NSString;

@interface AWENearbyPageInnerAction : NSObject

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSString *targetKey;
@property (copy, nonatomic) id /* block */ handler;

- (void).cxx_destruct;

@end
