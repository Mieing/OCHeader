@class NSString;

@interface MMFinderLiveBattleDurationItem : NSObject

@property (nonatomic) unsigned int interval;
@property (retain, nonatomic) NSString *displayName;

+ (id)itemsWithBackendArray:(id)a0;

- (id)initWithInterval:(unsigned int)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
