@interface FlutterStartUpTransitionReportInfo : NSObject

@property (nonatomic) long long transitionStartMills;
@property (nonatomic) long long transitionEndMills;
@property (nonatomic) long long transitionMode;

+ (id)makeWithTransitionStartMills:(long long)a0 transitionEndMills:(long long)a1 transitionMode:(long long)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;

@end
