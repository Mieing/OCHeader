@class TPUrlDataSource;
@protocol ITPMediaAsset;

@interface TPPlayerDataSource : NSObject

@property (retain, nonatomic) TPUrlDataSource *urlDataSource;
@property (retain, nonatomic) id<ITPMediaAsset> mediaAsset;

+ (id)dataSourceWithUrlDataSource:(id)a0;
+ (id)dataSourceWithMediaAsset:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
