@class NSArray, AWEIMImageTrackerConfig, UIImage;
@protocol AWEIMImageProtocol;

@interface AWEIMAvatarProps : NSObject

@property (retain, nonatomic) NSArray *urlList;
@property (nonatomic) double ratio;
@property (retain, nonatomic) id<AWEIMImageProtocol> keyProvider;
@property (retain, nonatomic) AWEIMImageTrackerConfig *trackConfig;
@property (retain, nonatomic) UIImage *placeholderImage;

- (void).cxx_destruct;

@end
