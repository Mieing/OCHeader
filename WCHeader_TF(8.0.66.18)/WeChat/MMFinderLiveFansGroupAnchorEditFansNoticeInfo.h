@class NSString, UIImage;

@interface MMFinderLiveFansGroupAnchorEditFansNoticeInfo : NSObject <NSCopying>

@property (nonatomic) unsigned int levelRequired;
@property (nonatomic) unsigned long long maxLevelAvailable;
@property (retain, nonatomic) NSString *notice;
@property (retain, nonatomic) NSString *imageUrlString;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned int visibility;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
