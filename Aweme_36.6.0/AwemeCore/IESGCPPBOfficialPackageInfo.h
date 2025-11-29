@class NSString;

@interface IESGCPPBOfficialPackageInfo : GPBMessage

@property (nonatomic) BOOL showOfficialDownloadIcon;
@property (copy, nonatomic) NSString *officialDownloadIconSchema;

+ (id)descriptor;

@end
