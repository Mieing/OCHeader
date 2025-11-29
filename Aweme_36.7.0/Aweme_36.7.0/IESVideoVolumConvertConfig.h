@class HTSVideoData;

@interface IESVideoVolumConvertConfig : NSObject

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long pointsCount;
@property (retain, nonatomic) HTSVideoData *videoData;

- (void).cxx_destruct;

@end
