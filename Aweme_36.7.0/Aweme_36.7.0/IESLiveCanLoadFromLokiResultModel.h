@class NSString, NSArray;

@interface IESLiveCanLoadFromLokiResultModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *rootPath;
@property (nonatomic) BOOL existed;
@property (copy, nonatomic) NSArray *filePaths;

- (void).cxx_destruct;

@end
