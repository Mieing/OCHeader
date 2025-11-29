@interface AWEAntiAddictTimeLockAction : AWEAntiAddictBaseAction

+ (id)moduleName;

- (id)updatedDataOnBegin;
- (id)updatedDataOnEnd;
- (void)begin;
- (void)end;

@end
