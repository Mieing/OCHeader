@class NSMutableDictionary, NSString, UIImage, WCFinderDataItem, MMMusicMVTrackItem;

@interface MMMusicMVTrackItemThumbInfo : NSObject

@property (retain, nonatomic) WCFinderDataItem *finderDataItem;
@property (retain, nonatomic) UIImage *thumbImage;
@property (retain, nonatomic) NSMutableDictionary *dictVideoThumb;
@property (retain, nonatomic) NSString *videoLocalPath;
@property (retain, nonatomic) NSString *thumbUrl;
@property (weak, nonatomic) MMMusicMVTrackItem *refTrackItem;

- (void).cxx_destruct;

@end
