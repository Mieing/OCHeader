@class NSString;

@interface ACCImageAlbumTrackModel : MTLModel

@property (copy, nonatomic) NSString *albumEntryName;
@property (copy, nonatomic) NSString *editPageEntryName;
@property (copy, nonatomic) NSString *publishPageEntryName;
@property (copy, nonatomic) NSString *publishContentType;

- (void).cxx_destruct;
- (id)debugDescription;

@end
