@class NSString;

@interface CdnTransInfo : WXPBGeneratedMessage

@property (nonatomic) int tag;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) unsigned int qualityTag;
@property (retain, nonatomic) NSString *tagName;
@property (nonatomic) unsigned int rate;
@property (nonatomic) unsigned int videoTagType;
@property (nonatomic) unsigned int videoQualityLevel;
@property (retain, nonatomic) NSString *videoQualityLevelDesc;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *backUrl;
@property (nonatomic) unsigned int backVideoTagType;

+ (void)initialize;

@end
