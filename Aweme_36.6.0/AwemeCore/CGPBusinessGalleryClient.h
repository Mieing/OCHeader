@class NSString;

@interface CGPBusinessGalleryClient : GPBMessage

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *downloadURL;

+ (id)descriptor;

@end
