@class NSString;

@interface YtRawImgData_OC : JSONModel

@property (retain, nonatomic) NSString *image;
@property (nonatomic) long long capture_time;
@property (retain, nonatomic) NSString *checksum;
@property (nonatomic) int x;
@property (nonatomic) int y;

- (void).cxx_destruct;

@end
