@class NSString;

@interface OMJCamFilterDesc : NSObject

@property (retain, nonatomic) NSString *filterID;
@property (retain, nonatomic) NSString *lutImageFilePath;
@property (nonatomic) float intensity;
@property (nonatomic) BOOL isEnabled;

- (void).cxx_destruct;

@end
