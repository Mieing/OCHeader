@class NSString;

@interface AWEIMAccessUserModel : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL shouldExecuteBlockOnce;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL loadingAnimationWanted;
@property (nonatomic) BOOL refreshedUserNeeded;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
