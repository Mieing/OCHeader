@class NSString;

@interface VEVideoFillConfig : NSObject

@property (nonatomic) unsigned long long fillAlgType;
@property (nonatomic) double algScale;
@property (copy, nonatomic) NSString *lensBinPath;

- (void).cxx_destruct;
- (id)init;

@end
