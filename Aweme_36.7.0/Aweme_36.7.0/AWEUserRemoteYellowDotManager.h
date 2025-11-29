@class NSArray, NSString;

@interface AWEUserRemoteYellowDotManager : NSObject <AWEUserRemoteYellowDotManagerProtocol>

@property (copy, nonatomic) NSArray *yellowPoints;
@property (copy, nonatomic) NSString *userID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapYellowDotForType:(unsigned long long)a0;
- (void)updateYellowPoints:(id)a0;
- (void)saveYellowPointsToStorag;
- (id)localYellowDotInfoForType:(unsigned long long)a0;
- (void)updateTypeInfo:(id)a0 forType:(unsigned long long)a1;
- (id)localStorageKey;
- (BOOL)hasYellowDotForType:(unsigned long long)a0;
- (BOOL)hasTabMeYellowDot;
- (BOOL)hasProfileMoreYellowDot;
- (BOOL)hasSliderInsightsYellowDot;
- (void).cxx_destruct;
- (id)initWithUserModel:(id)a0;

@end
