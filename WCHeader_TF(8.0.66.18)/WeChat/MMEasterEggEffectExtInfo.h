@class NSString;

@interface MMEasterEggEffectExtInfo : NSObject

@property (retain, nonatomic) NSString *keyword;
@property (nonatomic) unsigned int messageLocalId;
@property (nonatomic) unsigned int randomSeed;
@property (nonatomic) BOOL resume;

- (id)jsonString;
- (void).cxx_destruct;

@end
