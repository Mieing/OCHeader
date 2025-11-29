@class NSString;

@interface FinderUserPageSignatureFoldInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isFold;
@property (retain, nonatomic) NSString *foldSignature;
@property (retain, nonatomic) NSString *warningMsg;

+ (void)initialize;

- (void)setWarningMsg:(id)a0;
- (id)warningMsg;
- (void)setFoldSignature:(id)a0;
- (id)foldSignature;
- (void)setIsFold:(BOOL)a0;
- (BOOL)isFold;

@end
