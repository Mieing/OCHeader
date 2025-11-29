@class NSString;

@interface DataReportSubstitutePage : NSObject <NSCopying>

@property (nonatomic) unsigned long long pageHash;
@property (retain, nonatomic) NSString *pageHashStr;
@property (retain, nonatomic) NSString *pageName;
@property (nonatomic) BOOL is4TabOfLauncherUI;
@property (nonatomic) BOOL isFullSubPage;
@property (nonatomic) BOOL isSubPage;
@property (nonatomic) BOOL isParentPage;
@property (nonatomic) BOOL isFlutterPage;
@property (nonatomic) long long stackDeep;
@property (retain, nonatomic) NSString *enterMethod;

- (id)init;
- (id)initWithObj:(id)a0;
- (id)initWithPageHash:(unsigned long long)a0 withPageName:(id)a1;
- (BOOL)isEqualObject:(id)a0;
- (BOOL)isEqualSubstitutePage:(id)a0;
- (BOOL)isEqualHash:(unsigned long long)a0;
- (BOOL)isEqualHash:(unsigned long long)a0 pageName:(id)a1;
- (id)toString;
- (id)getEnterMethod;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
