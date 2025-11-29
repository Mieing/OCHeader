@class NSString;

@interface BDUGLuckyDataListItem : BDUGLuckyBDModel

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *replacePath;
@property (copy, nonatomic) NSString *replaceType;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
