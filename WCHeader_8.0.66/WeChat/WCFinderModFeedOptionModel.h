@class NSString, NSMutableArray, FinderLocation;

@interface WCFinderModFeedOptionModel : NSObject

@property (nonatomic) unsigned int actionScene;
@property (copy, nonatomic) NSString *contentDesp;
@property (copy, nonatomic) NSString *fullCoverUrl;
@property (copy, nonatomic) NSString *coverUrl;
@property (nonatomic) int coverShowStyle;
@property (copy, nonatomic) NSMutableArray *coverUrlWord;
@property (copy, nonatomic) NSString *shareCoverUrl;
@property (nonatomic) int shareCoverShowStyle;
@property (copy, nonatomic) NSMutableArray *shareCoverUrlWord;
@property (retain, nonatomic) NSMutableArray *shortTitleArray;
@property (retain, nonatomic) FinderLocation *location;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
