@class NSString;

@interface MMFinderLiveImageCarouselViewModel : NSObject

@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic) BOOL isLocal;
@property (nonatomic) BOOL isShowForClearScreen;
@property (nonatomic) double scrollTimeInterval;
@property (nonatomic) double cellWidth;

+ (id)cellIdentifier;
+ (Class)cellClass;

- (void).cxx_destruct;

@end
