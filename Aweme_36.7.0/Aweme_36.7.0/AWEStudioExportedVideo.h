@class NSString;

@interface AWEStudioExportedVideo : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long duration;
@property (nonatomic) double width;
@property (nonatomic) double height;

- (void).cxx_destruct;
- (id)description;

@end
