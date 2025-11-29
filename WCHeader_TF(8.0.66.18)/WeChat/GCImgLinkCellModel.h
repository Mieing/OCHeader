@class NSString, JumpInfo, GCImgLinkVideoModel;

@interface GCImgLinkCellModel : GCChatBaseCellModel

@property (nonatomic) struct CGSize { double width; double height; } imgSize;
@property (retain, nonatomic) GCImgLinkVideoModel *videoModel;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) JumpInfo *jumpInfo;

- (id)initWithChatroomMessage:(id)a0;
- (Class)bindCellClass;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
