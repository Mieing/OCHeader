@class NSString, AWEAwemeModel;

@interface AWEAntiAddictMaskConfig : NSObject

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) long long antiAddictType;
@property (nonatomic) unsigned long long antiAddictMaskType;
@property (nonatomic) unsigned long long antiAddictVideoType;
@property (nonatomic) BOOL isAntiAddictOfficialMask;
@property (nonatomic) BOOL enableAutoVideoControl;
@property (nonatomic) BOOL isPreviewMode;
@property (nonatomic) BOOL disablePreviewModeEdit;
@property (copy, nonatomic) NSString *previewMainTitle;
@property (copy, nonatomic) NSString *previewSubTitle;

- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
