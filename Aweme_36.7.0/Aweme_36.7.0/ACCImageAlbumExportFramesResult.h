@class NSArray;

@interface ACCImageAlbumExportFramesResult : NSObject

@property (readonly, nonatomic) long long realCount;
@property (nonatomic) long long expectedCount;
@property (copy, nonatomic) NSArray *uploadFramesItems;

- (void).cxx_destruct;

@end
