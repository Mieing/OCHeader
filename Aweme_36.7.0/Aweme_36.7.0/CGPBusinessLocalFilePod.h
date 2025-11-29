@class NSString;

@interface CGPBusinessLocalFilePod : GPBMessage

@property (copy, nonatomic) NSString *appPackageName;
@property (copy, nonatomic) NSString *savePath;
@property (copy, nonatomic) NSString *downloadURL;
@property (nonatomic) int type;
@property (nonatomic) int uploadState;
@property (nonatomic) int uploadProgress;

+ (id)descriptor;

@end
