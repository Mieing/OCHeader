@class NSString, LensIcon;

@interface EmoticonLensIconTask : MMObject

@property (retain, nonatomic) LensIcon *iconInfo;
@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) NSString *targetPath;
@property (retain, nonatomic) NSString *tempPath;

- (void).cxx_destruct;

@end
