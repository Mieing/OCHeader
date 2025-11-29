@class NSString, FinderLiveAppMsgUpdateFinderObjectInfo_LiveCoverImage, NSMutableArray, FinderLocation;

@interface FinderLiveAppMsgUpdateFinderObjectInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *description;
@property (retain, nonatomic) FinderLiveAppMsgUpdateFinderObjectInfo_LiveCoverImage *coverImg;
@property (retain, nonatomic) NSString *coverImgUrlToken;
@property (retain, nonatomic) NSMutableArray *liveCoverImgs;
@property (retain, nonatomic) NSString *descriptionExtend;
@property (nonatomic) int opFlag;
@property (retain, nonatomic) FinderLocation *location;

+ (void)initialize;

@end
