@class NSString, NSDictionary, NSArray;

@interface TIMXUpdateConvInfoExtByVersionModel : NSObject

@property (copy, nonatomic) NSString *convId;
@property (retain, nonatomic) Class extClass;
@property (copy, nonatomic) NSString *reportExtIllegalTypeStr;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSArray *extVersionArray;

- (void).cxx_destruct;

@end
