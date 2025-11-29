@class UIImage, UIColor;

@interface CAKAlbumSelectedAssetsViewCustomCellItem : NSObject

@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double cornerRadius;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (copy, nonatomic) id /* block */ shouldSelectBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ trackInfoBlock;
@property (copy, nonatomic) id /* block */ payloadBlock;

- (void).cxx_destruct;

@end
