@class NSString, NSDictionary, UIImage, AWEImageAlbumBSModel;

@interface AWESearchHomeNewStyleInputViewResultContext : NSObject

@property (copy, nonatomic) NSString *textQuery;
@property (retain, nonatomic) AWEImageAlbumBSModel *imageModel;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL deepThinkIsOpen;
@property (nonatomic) BOOL superAgentIsOpen;
@property (nonatomic) BOOL isUserEditAndSearch;
@property (nonatomic) unsigned long long searchMethod;
@property (copy, nonatomic) NSDictionary *userGuideInfo;
@property (copy, nonatomic) NSString *originEnterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *replayID;

- (void).cxx_destruct;

@end
