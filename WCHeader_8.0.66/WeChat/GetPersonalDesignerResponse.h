@class SKBuiltinBuffer_t, NSString, DesignerLinkInfo, NSData, PersonalDesigner, NSMutableArray, BaseResponse;

@interface GetPersonalDesignerResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *bannerUrl;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *bizName;
@property (retain, nonatomic) NSMutableArray *emotionList;
@property (retain, nonatomic) SKBuiltinBuffer_t *reqBuf;
@property (retain, nonatomic) NSMutableArray *emojiList;
@property (retain, nonatomic) DesignerLinkInfo *designerLinkInfo;
@property (retain, nonatomic) NSMutableArray *bannerSetList;
@property (retain, nonatomic) NSMutableArray *ipsetList;
@property (retain, nonatomic) NSData *designerIplistContext;
@property (nonatomic) unsigned int emojiTotalCount;
@property (nonatomic) unsigned int emotionTotalCount;
@property (retain, nonatomic) PersonalDesigner *personalDesigner;

+ (void)initialize;

@end
