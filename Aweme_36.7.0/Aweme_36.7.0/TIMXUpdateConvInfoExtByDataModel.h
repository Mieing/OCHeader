@class NSString, NSArray;

@interface TIMXUpdateConvInfoExtByDataModel : NSObject

@property (copy, nonatomic) NSString *convId;
@property (retain, nonatomic) Class extClass;
@property (copy, nonatomic) NSArray *extDataArray;

- (void).cxx_destruct;

@end
