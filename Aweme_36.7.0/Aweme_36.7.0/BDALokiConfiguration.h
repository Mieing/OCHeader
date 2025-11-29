@class NSDictionary, NSString, NSArray;

@interface BDALokiConfiguration : NSObject

@property (copy, nonatomic) NSDictionary *accessKeyDics;
@property (copy, nonatomic) NSDictionary *customTrackData;
@property (nonatomic) BOOL removeInDwongrade;
@property (nonatomic) long long widthMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) BOOL enableEventThrough;
@property (copy, nonatomic) NSString *commonAccessKey;
@property (nonatomic) double targetWidth;
@property (copy, nonatomic) NSArray *extraJSPaths;
@property (nonatomic) long long useAnnieXMode;
@property (copy, nonatomic) NSString *clickEdgeInsets;

- (void).cxx_destruct;
- (id)init;

@end
