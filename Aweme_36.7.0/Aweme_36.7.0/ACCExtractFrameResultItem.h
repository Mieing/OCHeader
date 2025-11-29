@class NSString, NSDictionary, NSArray, CLLocation;

@interface ACCExtractFrameResultItem : NSObject

@property (retain, nonatomic) NSDictionary *framesDict;
@property (copy, nonatomic) NSString *materialID;
@property (retain, nonatomic) NSString *absolutePath;
@property (retain, nonatomic) CLLocation *location;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long source;
@property (nonatomic) struct CGSize { double width; double height; } materialSize;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSArray *framePaths;
@property (copy, nonatomic) NSArray *frameTimes;
@property (copy, nonatomic) NSString *resultId;
@property (nonatomic) BOOL fromCache;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
