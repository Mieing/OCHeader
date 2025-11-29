@class NSString;

@interface WCActionAreaSourceElement : WCActionAreaElement

@property (nonatomic) unsigned long long sourceShowType;
@property (retain, nonatomic) NSString *sourceText;
@property (retain, nonatomic) NSString *sourceUrl;
@property (retain, nonatomic) NSString *sourceBackupUrl;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)hashString;
- (void).cxx_destruct;

@end
