@class NSString;

@interface MJImageTemplateItem : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *coverImageURL;
@property (nonatomic) unsigned long long descVersion;
@property (retain, nonatomic) NSString *descDownloadURL;
@property (nonatomic) unsigned long long minimumiOSSDKVersion;
@property (nonatomic) unsigned long long minimumAndroidSDKVersion;
@property (readonly, nonatomic) BOOL isBlank;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) unsigned long long loadingStatus;

+ (id)blankTemplateInfo;

- (id)initWithIdentifier:(id)a0 name:(id)a1 coverImageURL:(id)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
