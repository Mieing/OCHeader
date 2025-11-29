@class NSString, NSArray, NSData;

@interface EcsShareSnsExtInfo : NSObject

@property (retain, nonatomic) NSString *imgLocalPath;
@property (retain, nonatomic) NSString *lastGmsgId;
@property (retain, nonatomic) NSString *videoLocalPath;
@property (retain, nonatomic) NSString *videoThumbLocalPath;
@property (retain, nonatomic) NSArray *imgLocalPathList;
@property (retain, nonatomic) NSString *dataUrl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSData *thumbData;
@property (retain, nonatomic) NSArray *mediaList;

- (void).cxx_destruct;

@end
