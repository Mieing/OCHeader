@class CJPayChannelInfoModel, NSString, NSArray, NSDictionary;

@interface CJPayChannelModel : JSONModel <CJPayDefaultChannelShowConfigBuildProtocol, CJPayRequestParamsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *mark;
@property (copy, nonatomic) NSArray *marks;
@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *msg;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *dynamicSubTitle;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *payTypeItemInfo;
@property (retain, nonatomic) CJPayChannelInfoModel *channelInfo;
@property (copy, nonatomic) NSString *cjIdentify;
@property (copy, nonatomic) NSString *identityVerifyWay;
@property (copy, nonatomic) NSString *subTitleColorStr;
@property (copy, nonatomic) NSString *tipsMsg;
@property (nonatomic) long long signStatus;
@property (copy, nonatomic) NSDictionary *retainInfoV2;
@property (nonatomic) long long index;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;
+ (id)modelCustomPropertyMapper;
+ (id)keyMapperDict;

@end
