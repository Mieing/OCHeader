@class NSString, IESSCMetalImage;

@interface IESSoloKTVDraftBGRecordItemModel : NSObject

@property (retain, nonatomic) NSString *vid;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) long long type;
@property (retain, nonatomic) IESSCMetalImage *imageCache;

- (void).cxx_destruct;

@end
