@class NSString, NSArray;

@interface WCStoryTimelineCellModel : NSObject

@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL isFavour;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) BOOL hasRead;
@property (nonatomic) BOOL isMessageCell;
@property (nonatomic) long long cornerCount;
@property (copy, nonatomic) NSArray *interactiveUsernameArray;

+ (id)timelineCellWithContact:(id)a0;
+ (id)timelineCellWithContact:(id)a0 dataItem:(id)a1;

- (void).cxx_destruct;

@end
