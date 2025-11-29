@class AWEMinorAlbum, AWETeenGeneralResourceGroupModel;

@interface AWETeenAlbumCoverCellModel : NSObject

@property (nonatomic) unsigned long long cardType;
@property (retain, nonatomic) AWEMinorAlbum *album;
@property (retain, nonatomic) AWETeenGeneralResourceGroupModel *guideCardResourceGroup;
@property (nonatomic) BOOL isCoverDynamic;
@property (nonatomic) BOOL isCoverPlayed;
@property (nonatomic) unsigned long long labelType;

- (void).cxx_destruct;

@end
