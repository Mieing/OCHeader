@class NSString;

@interface TTAccountEditUserProfileActivityTipsContentFormatModel : TTAccountBaseEntity

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long start;
@property (nonatomic) long long length;
@property (nonatomic) BOOL isBold;

+ (unsigned long long)modelCustomMappingOptions;

- (void).cxx_destruct;

@end
