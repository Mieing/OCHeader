@class NSString, NSArray;

@interface AWENearbyVCStackRollBackStatusModel : NSObject

@property (copy, nonatomic) NSString *currentTabIdentifier;
@property (copy, nonatomic) NSArray *rootVCStack;
@property (copy, nonatomic) NSArray *presentedVCStack;
@property (nonatomic) BOOL isRollBacking;

- (void).cxx_destruct;

@end
