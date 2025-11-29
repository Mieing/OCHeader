@class NSString;

@interface WCAdDynamicCanvasDSLPreloadItem : NSObject

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) long long type;
@property (nonatomic) long long size;
@property (retain, nonatomic) NSString *materialId;

- (void).cxx_destruct;

@end
