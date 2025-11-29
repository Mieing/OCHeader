@class NSString, NSNumber;

@interface AWESearchMusicAuthorCardMoreModel : NSObject

@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *searchKeyWord;
@property (copy, nonatomic) NSString *musicIDLists;
@property (retain, nonatomic) NSNumber *musicNum;

- (void).cxx_destruct;

@end
