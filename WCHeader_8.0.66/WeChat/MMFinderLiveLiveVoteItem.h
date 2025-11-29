@class NSString, NSMutableArray;

@interface MMFinderLiveLiveVoteItem : NSObject

@property (retain, nonatomic) NSString *question;
@property (retain, nonatomic) NSMutableArray *choices;
@property (nonatomic) unsigned long long timeLimit;
@property (nonatomic) BOOL allowMultipleSelection;

- (void).cxx_destruct;

@end
