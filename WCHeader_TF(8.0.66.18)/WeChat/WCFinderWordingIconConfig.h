@class NSString, NSMutableDictionary, WCFinderLightDarkIconName;

@interface WCFinderWordingIconConfig : NSObject

@property (copy, nonatomic) NSString *feedSinglePeopleLike;
@property (copy, nonatomic) NSString *feedMultiPeopleLiked;
@property (copy, nonatomic) NSString *fullFeedMultiPeopleLiked;
@property (copy, nonatomic) NSString *likeListTitle;
@property (copy, nonatomic) NSString *mentionLikedFeed;
@property (copy, nonatomic) NSString *mentionFriendLikedFeed;
@property (copy, nonatomic) NSString *mentionLikedLikes;
@property (copy, nonatomic) NSString *likeTips;
@property (nonatomic) BOOL isFromServer;
@property (retain, nonatomic) WCFinderLightDarkIconName *likedFilledIcon;
@property (retain, nonatomic) WCFinderLightDarkIconName *likedOutlinedIcon;
@property (retain, nonatomic) WCFinderLightDarkIconName *likedGroupIcon;
@property (retain, nonatomic) WCFinderLightDarkIconName *privateFilledIcon;
@property (retain, nonatomic) WCFinderLightDarkIconName *privateOutlinedIcon;
@property (retain, nonatomic) WCFinderLightDarkIconName *likedFilledFullPageIcon;
@property (retain, nonatomic) WCFinderLightDarkIconName *hotLikeOffIcon;
@property (retain, nonatomic) NSMutableDictionary *items;

- (void).cxx_destruct;

@end
