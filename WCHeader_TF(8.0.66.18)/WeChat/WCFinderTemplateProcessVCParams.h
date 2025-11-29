@class NSString, NSMutableArray;
@protocol WCEditImageViewControllerDelegate, WCEditVideoViewControllerDelegate;

@interface WCFinderTemplateProcessVCParams : NSObject

@property (nonatomic) unsigned long long pushType;
@property (weak, nonatomic) id<WCEditVideoViewControllerDelegate> editVideoVCdelegate;
@property (retain, nonatomic) NSMutableArray *fullVideoAssets;
@property (weak, nonatomic) id<WCEditImageViewControllerDelegate> editImageVCdelegate;
@property (retain, nonatomic) NSMutableArray *fullImageAssets;
@property (retain, nonatomic) NSMutableArray *images;
@property (nonatomic) int imageEntranceScene;
@property (nonatomic) unsigned long long imageFromScene;
@property (nonatomic) BOOL forbidChangeMusic;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *followFeedId;
@property (retain, nonatomic) NSMutableArray *omjTemplates;
@property (nonatomic) unsigned long long selectedIndex;

- (void).cxx_destruct;

@end
