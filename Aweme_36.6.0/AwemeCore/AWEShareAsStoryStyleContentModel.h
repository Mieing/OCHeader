@class NSString, NSArray, AWEShareAsStoryStyleFrameModel;

@interface AWEShareAsStoryStyleContentModel : NSObject

@property (copy, nonatomic) NSString *authorName;
@property (copy, nonatomic) NSString *titleInfo;
@property (nonatomic) double originalWidth;
@property (nonatomic) double originalHeight;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSArray *url;
@property (retain, nonatomic) AWEShareAsStoryStyleFrameModel *frame;

- (void).cxx_destruct;

@end
