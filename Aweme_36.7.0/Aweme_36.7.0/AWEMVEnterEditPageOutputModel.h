@class NSArray, NSString;

@interface AWEMVEnterEditPageOutputModel : NSObject

@property (copy, nonatomic) NSArray *selectedAssetNames;
@property (copy, nonatomic) NSString *templateModelId;
@property (retain, nonatomic) NSArray *selectedAssets;
@property (nonatomic) double generateBeginTime;

- (void).cxx_destruct;

@end
