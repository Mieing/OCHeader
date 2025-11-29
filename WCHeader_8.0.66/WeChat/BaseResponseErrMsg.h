@class NSString;

@interface BaseResponseErrMsg : WXPBGeneratedMessage

@property (nonatomic) int showType;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) int dispSec;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) int action;
@property (nonatomic) int delayConnSec;
@property (nonatomic) unsigned int countdown;
@property (retain, nonatomic) NSString *ok;
@property (retain, nonatomic) NSString *cancel;
@property (nonatomic) unsigned int icon;

+ (void)initialize;

- (id)initWithXml:(id)a0;
- (id)initWithXml:(id)a0 strictMode:(BOOL)a1;
- (id)initWithMsgBoxContent:(id)a0;
- (id)initWithDirectlyGoUrl:(id)a0;
- (BOOL)isShowAlert;
- (BOOL)isDirectlyGoUrl;

@end
