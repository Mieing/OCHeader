@class NSString, NSDictionary, AWEAwemeModel, NSDate;

@interface AFDPermissionUserAction : NSObject <AFDUserActionProtocol>

@property (nonatomic) long long level;
@property (copy, nonatomic) NSDictionary *info;
@property (retain, nonatomic) NSDate *createDate;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEndAction;
- (BOOL)isRootAction;
- (void)trackDataConsistencyFailedWithActions:(id)a0 resultType:(unsigned long long)a1;
- (id)rootActionLevels;
- (id)endActionLevels;
- (void)checkWithActions:(id)a0;
- (void).cxx_destruct;

@end
