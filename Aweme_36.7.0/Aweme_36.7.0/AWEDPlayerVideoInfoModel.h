@class NSNumber, NSString, AWEURLModel;

@interface AWEDPlayerVideoInfoModel : NSObject

@property (retain, nonatomic) AWEURLModel *playURL;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (retain, nonatomic) NSNumber *height;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *dashVideoModel;
@property (nonatomic) BOOL dashEnableDynamicRate;
@property (nonatomic) long long isSourceHDR;
@property (nonatomic) long long hdrType;

- (void).cxx_destruct;

@end
