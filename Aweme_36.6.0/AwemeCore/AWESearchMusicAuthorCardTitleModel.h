@class NSString, NSNumber;

@interface AWESearchMusicAuthorCardTitleModel : NSObject

@property (nonatomic) BOOL hasTracked;
@property (nonatomic) BOOL showSeperator;
@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *musicIDLists;
@property (retain, nonatomic) NSNumber *musicNum;
@property (nonatomic) BOOL hasMore;

- (void).cxx_destruct;

@end
