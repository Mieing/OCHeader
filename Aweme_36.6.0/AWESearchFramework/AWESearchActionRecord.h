@class NSString;

@interface AWESearchActionRecord : NSObject

@property (nonatomic) unsigned long long searchResultTab;
@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchKeyword;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupId;

- (void).cxx_destruct;

@end
