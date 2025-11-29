@class WCFinderChangeSet;

@interface WCFinderSectionChanges : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long section;
@property (retain, nonatomic) WCFinderChangeSet *changes;

+ (id)changeWithSection:(long long)a0;

- (void).cxx_destruct;

@end
