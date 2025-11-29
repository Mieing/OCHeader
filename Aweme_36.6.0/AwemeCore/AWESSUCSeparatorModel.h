@class NSString, AWESSUCColorModel, AWESSUCSizeModel;

@interface AWESSUCSeparatorModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *separatorType;
@property (retain, nonatomic) AWESSUCColorModel *backgroundColor;
@property (retain, nonatomic) AWESSUCSizeModel *size;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
