@class AWEPOIAlbumSinglePhoto, NSString;

@interface AWEPOIAlbumDoubleColumnPhoto : UITableViewCell <AWEPOIAlbumCellProtocol>

@property (retain, nonatomic) AWEPOIAlbumSinglePhoto *leftItem;
@property (retain, nonatomic) AWEPOIAlbumSinglePhoto *rightItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
