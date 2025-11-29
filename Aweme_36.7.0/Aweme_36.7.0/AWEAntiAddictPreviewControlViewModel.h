@class NSString;

@interface AWEAntiAddictPreviewControlViewModel : NSObject

@property (nonatomic) unsigned long long previewVideoType;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isRestRemind;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *videoTag;
@property (copy, nonatomic) NSString *prePage;

- (BOOL)useDefaultTitle;
- (void)initTitles;
- (id)initWithAwemeID:(id)a0 previewVideoType:(unsigned long long)a1 isEditable:(BOOL)a2 isRestRemind:(BOOL)a3 videoTag:(id)a4 prePage:(id)a5;
- (void).cxx_destruct;

@end
