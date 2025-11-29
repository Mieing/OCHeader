@class CContact, UIImage, NSData, CMessageWrap, BrandMpVideoItem;

@interface BrandMPVideoOpenParams : NSObject

@property (readonly, nonatomic) BrandMpVideoItem *videoItem;
@property (nonatomic) double videoCurrTime;
@property (retain, nonatomic) UIImage *currFrameImage;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (retain, nonatomic) NSData *videoThumbData;
@property (readonly, nonatomic) CMessageWrap *wrapMsg;
@property (readonly, nonatomic) CContact *contact;

- (id)initWithDict:(id)a0;
- (id)initWithFavData:(id)a0;
- (id)initWithWCDataItem:(id)a0;
- (id)genEmptyMpVideoMsg;
- (id)description;
- (void).cxx_destruct;

@end
