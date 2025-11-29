@class NSSet, NSMutableArray;

@interface AWEHPChannelComponentContext : NSObject

@property (retain, nonatomic) NSMutableArray *tabIDStack;
@property (copy, nonatomic) NSSet *cTags;

- (void).cxx_destruct;

@end
