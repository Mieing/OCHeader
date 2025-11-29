@class NSArray, NSError;

@interface AWELongVideoAdPlayerContext : NSObject

@property (nonatomic) long long displayIndex;
@property (retain, nonatomic) NSArray *displayEngineModels;
@property (retain, nonatomic) NSError *playerDisplayError;
@property (nonatomic) double playTime;

- (id)currentDisplayAdInfoModel;
- (id)currentDisplayAdEngineModel;
- (void).cxx_destruct;
- (void)clear;

@end
