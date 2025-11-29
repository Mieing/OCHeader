@class NSString, NSArray, BDByteCastPPMediaAssetBean;

@interface BDByteCastPPDramaBean : NSObject

@property (copy, nonatomic) NSString *dramaId;
@property (copy, nonatomic) NSArray *urlBeans;
@property (retain, nonatomic) BDByteCastPPMediaAssetBean *mediaAssetBean;

+ (id)modelContainerPropertyGenericClass;

- (void).cxx_destruct;

@end
