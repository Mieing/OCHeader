@class FinderContactPrivacyInfo_AsViewerPrivacyInfo, FinderContactPrivacyInfo_AsAuthorPrivacyInfo;

@interface FinderContactPrivacyInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContactPrivacyInfo_AsViewerPrivacyInfo *asViewerPrivacyInfo;
@property (retain, nonatomic) FinderContactPrivacyInfo_AsAuthorPrivacyInfo *asAuthorPrivacyInfo;

+ (void)initialize;

- (void)setAsAuthorPrivacyInfo:(id)a0;
- (id)asAuthorPrivacyInfo;
- (void)setAsViewerPrivacyInfo:(id)a0;
- (id)asViewerPrivacyInfo;

@end
