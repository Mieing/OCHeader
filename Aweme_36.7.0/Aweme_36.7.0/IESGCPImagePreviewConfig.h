@class NSArray, NSDictionary;

@interface IESGCPImagePreviewConfig : NSObject

@property (readonly, nonatomic) NSArray *imageUrls;
@property (readonly, nonatomic) NSArray *localImages;
@property (retain, nonatomic) NSArray *originImageViews;
@property (retain, nonatomic) NSDictionary *placeholderImageMap;
@property (nonatomic) unsigned long long currentIndex;

- (id)initWithLocalImages:(id)a0;
- (void).cxx_destruct;
- (id)initWithUrls:(id)a0;

@end
