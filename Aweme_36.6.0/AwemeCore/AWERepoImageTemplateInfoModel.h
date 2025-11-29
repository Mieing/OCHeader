@class NSString;

@interface AWERepoImageTemplateInfoModel : NSObject

@property (copy, nonatomic) NSString *uniqueId;
@property (copy, nonatomic) NSString *originImgPath;
@property (copy, nonatomic) NSString *imageTemplateId;
@property (copy, nonatomic) NSString *editDataInfo;
@property (copy, nonatomic) NSString *editDataInfoPath;
@property (copy, nonatomic) NSString *mediaId;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
