@class NSArray, NSDictionary;

@interface IESCommonVideoDashInfoPayload : NSObject

@property (nonatomic) BOOL ownPlayerPlayWithURLs;
@property (copy, nonatomic) NSArray *hostArray;
@property (nonatomic) BOOL enablePlayerBashVideo;
@property (nonatomic) BOOL enablePlayerCheckHijack;
@property (copy, nonatomic) NSDictionary *dashInfo;

- (void).cxx_destruct;

@end
