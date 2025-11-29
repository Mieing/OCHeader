@class NSString, IESECWinReplayCollectionModel;
@protocol IESECWinReplayCollectionCardViewModelDelegate;

@interface IESECWinReplayCollectionCardViewModel : NSObject <IESECWinReplayCollectionCoverDelegate, IESECWinReplayCollectionTitleDelegate, IESECWinReplayCollectionSubtitleDelegate, IESECWinReplayCollectionVideoCoverDelegate>

@property (retain, nonatomic) IESECWinReplayCollectionModel *model;
@property (weak, nonatomic) id<IESECWinReplayCollectionCardViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *productIdGroup;
@property (nonatomic) double contentWidth;
@property (nonatomic) double singleWidth;
@property (nonatomic) double doubleWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageURLArray;
- (id)imageURLArrayAtIndex:(unsigned long long)a0;
- (void)clickGoodsCoverAtIndex:(unsigned long long)a0;
- (void)clickGoodsVideoCoverTagView;
- (id)subtitle;
- (void).cxx_destruct;
- (id)title;
- (id)imageAtIndex:(unsigned long long)a0;
- (id)labelInfo;

@end
