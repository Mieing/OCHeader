@class NSString;

@interface AWEPublishImageAlbumLargePreviewViewConfig : NSObject

@property (copy, nonatomic) NSString *cellIdentifier;
@property (copy, nonatomic) Class cellClass;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL disableLongAndPanGesture;

- (void).cxx_destruct;

@end
