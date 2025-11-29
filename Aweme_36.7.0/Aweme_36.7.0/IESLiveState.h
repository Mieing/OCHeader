@class NSString, NSDictionary;

@interface IESLiveState : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) id /* block */ willEnteBlock;
@property (copy, nonatomic) id /* block */ didEnterBlock;
@property (copy, nonatomic) id /* block */ willLeaveBlock;
@property (copy, nonatomic) id /* block */ didLeaveBlock;

+ (id)stateWithName:(id)a0 userInfo:(id)a1;
+ (id)stateWithName:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithName:(id)a0 userInfo:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
