@class NSString, NSArray;

@interface CJPayGurdImgModel : JSONModel

@property (nonatomic) BOOL enableGurdImg;
@property (copy, nonatomic) NSString *cdnUrl;
@property (copy, nonatomic) NSArray *iosImgChannelList;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
