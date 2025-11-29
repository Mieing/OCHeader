@class NSString, UIImage;

@interface AWEPublishNewSlidesPreviewItemInfo : NSObject

@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) UIImage *thumbnailImage;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;

@end
