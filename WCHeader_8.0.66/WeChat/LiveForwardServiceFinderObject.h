@class NSNumber, FlutterStandardTypedData;

@interface LiveForwardServiceFinderObject : NSObject

@property (retain, nonatomic) FlutterStandardTypedData *buff;
@property (retain, nonatomic) NSNumber *ignoreOneTimeFlag;

+ (id)makeWithBuff:(id)a0 ignoreOneTimeFlag:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
