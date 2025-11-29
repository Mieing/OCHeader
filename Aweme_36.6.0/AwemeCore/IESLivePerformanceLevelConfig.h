@class NSArray;

@interface IESLivePerformanceLevelConfig : NSObject

@property (nonatomic) BOOL andor;
@property (retain, nonatomic) NSArray *conditions;

+ (id)transformFromDictionary:(id)a0;

- (void).cxx_destruct;

@end
