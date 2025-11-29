@class NSArray;

@interface GamePlayVESpeedConfig : NSObject

@property (nonatomic) long long repeatDuration;
@property (nonatomic) unsigned long long mode;
@property (copy, nonatomic) NSArray *points;

+ (id)modelWithJson:(id)a0;
+ (id)modelWithDictionary:(id)a0;

- (void).cxx_destruct;

@end
