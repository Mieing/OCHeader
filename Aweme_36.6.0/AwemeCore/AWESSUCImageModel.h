@class AWESSUCImageURLModel, AWESSUCSizeModel;

@interface AWESSUCImageModel : AWEBaseApiModel

@property (retain, nonatomic) AWESSUCSizeModel *size;
@property (retain, nonatomic) AWESSUCImageURLModel *imageURL;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
