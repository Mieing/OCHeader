@class NSArray, NSString;

@interface FTSContactDBMatchInfo : NSObject

@property (nonatomic) unsigned int firstLevelIndex;
@property (nonatomic) unsigned int secondLevelIndex;
@property (nonatomic) unsigned int location;
@property (retain, nonatomic) NSArray *matchPhases;
@property (retain, nonatomic) NSString *matchContent;
@property (nonatomic) unsigned long long queryMatchType;

- (void).cxx_destruct;

@end
