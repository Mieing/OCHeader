@class NSString;

@interface CGPBusinessLocalPicturePod : GPBMessage

@property (copy, nonatomic) NSString *appPackageName;
@property (copy, nonatomic) NSString *savePath;
@property (copy, nonatomic) NSString *downloadURL;

+ (id)descriptor;

@end
