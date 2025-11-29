@class NSString;

@interface AWEPOIAlbumTabInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *totalCount;
@property (nonatomic) BOOL hasTrackShowEvent;

+ (id)JSONKeyPathsByPropertyKey;

- (double)labelHeight;
- (id)unselectedLabelColor;
- (id)unselectedLabelFont;
- (id)unselectedBGColor;
- (id)selectedBGColor;
- (id)selectedLabelFont;
- (struct CGSize { double x0; double x1; })selectedLabelCellSize;
- (struct CGSize { double x0; double x1; })unselectedLabelCellSize;
- (struct CGSize { double x0; double x1; })selectedLabelSize;
- (struct CGSize { double x0; double x1; })unselectedLabelSize;
- (void).cxx_destruct;
- (id)labelText;
- (double)itemHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })labelInset;
- (id)selectedLabelColor;

@end
