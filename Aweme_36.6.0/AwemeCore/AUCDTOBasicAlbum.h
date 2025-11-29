@class NSString, AUCDTOBasicAlbumSelectControl;

@interface AUCDTOBasicAlbum : MTLModel

@property (retain, nonatomic) AUCDTOBasicAlbumSelectControl *selectControl;
@property (nonatomic) BOOL showBottomViewWhenNotSelect;
@property (nonatomic) BOOL showSelectedAssetsViewWhenNotSelect;
@property (nonatomic) BOOL enableBottomBarTips;
@property (nonatomic) BOOL descendingOrder;
@property (nonatomic) long long columnNumber;
@property (copy, nonatomic) NSString *defaultTabIdentifier;

- (void).cxx_destruct;
- (id)init;

@end
