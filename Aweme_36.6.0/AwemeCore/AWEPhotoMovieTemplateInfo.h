@class NSArray, NSString;

@interface AWEPhotoMovieTemplateInfo : NSObject

@property (copy, nonatomic) NSArray *templateVideoCoverURL;
@property (copy, nonatomic) NSArray *templatePictureCoverURL;
@property (nonatomic) long long templateMinMaterial;
@property (nonatomic) long long templateMaxMaterial;
@property (nonatomic) long long templatePicInputWidth;
@property (nonatomic) long long templatePicInputHeight;
@property (copy, nonatomic) NSString *templatePicFillMode;
@property (nonatomic) long long templateType;

- (void).cxx_destruct;

@end
