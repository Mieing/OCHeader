@class NSString, NSMutableSet;

@interface SnsAlbumFeedBehaviour : NSObject <SnsRepotable>

@property (retain, nonatomic) NSMutableSet *galleryBrowseMediaSet;
@property (retain, nonatomic) NSMutableSet *detailPageBrowsePicSet;
@property (retain, nonatomic) NSString *toUsername;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) unsigned int feedType;
@property (nonatomic) unsigned int ifAddText;
@property (nonatomic) unsigned int feedMediaCount;
@property (nonatomic) unsigned int isClickedFromAlbum;
@property (nonatomic) unsigned int isClickIntoDetail;
@property (nonatomic) unsigned int browsedPicCountAtDetail;
@property (nonatomic) unsigned int browsedPicCountAtGallery;
@property (nonatomic) unsigned int browseTimeAtDetail;
@property (nonatomic) unsigned int browseTimeAtGallery;
@property (nonatomic) unsigned int canViewCommentCount;
@property (nonatomic) unsigned int canViewLikeCount;
@property (nonatomic) unsigned int commentFlag;
@property (nonatomic) unsigned int likeFlag;
@property (nonatomic) long long modifyTogetherOperation;
@property (nonatomic) long long browseSceneType;
@property (retain, nonatomic) NSString *albumSessionID;
@property (nonatomic) BOOL isDetailSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)recordCommentFlag:(int)a0;
- (void)recordLikeFlag:(int)a0;
- (void)recordModifyTogetherOperation:(long long)a0;
- (void)recordDetailPageBrowseMedia:(id)a0;
- (void)recordGalleryBrowseMedia:(id)a0;
- (void)incGalleryStayTime:(unsigned int)a0;
- (void)incFeedDetailStayTime:(unsigned int)a0;
- (unsigned int)protocolID;
- (void)doReport;
- (id)logStr;
- (void).cxx_destruct;

@end
