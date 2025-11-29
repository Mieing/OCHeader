@class ShootingTemplateTab, NSData, NSMutableArray, BaseResponse;

@interface GetCameraTemplateListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *tpls;
@property (retain, nonatomic) NSData *pageBuffer;
@property (nonatomic) unsigned int maxAge;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSMutableArray *tabs;
@property (retain, nonatomic) ShootingTemplateTab *curTab;
@property (nonatomic) BOOL landingOnEmptyTemplate;

+ (void)initialize;

@end
