@class NSArray, NSString;

@interface IESECDLImageRenderModel : IESECDLBaseRenderModel

@property (copy, nonatomic) NSArray *URLList;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *placeHolderColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
