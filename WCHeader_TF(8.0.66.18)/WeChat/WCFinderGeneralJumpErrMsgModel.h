@class WCFinderLiteAppParams, NSString, WCFinderGeneralJumpToastConfig, WCFinderGeneralJumpH5Model;

@interface WCFinderGeneralJumpErrMsgModel : NSObject

@property (nonatomic) long long showType;
@property (nonatomic) long long linkType;
@property (retain, nonatomic) WCFinderGeneralJumpToastConfig *toastConfig;
@property (retain, nonatomic) WCFinderGeneralJumpH5Model *linkH5;
@property (retain, nonatomic) WCFinderLiteAppParams *linkLiteApp;
@property (copy, nonatomic) NSString *extInfo;
@property (nonatomic) int showTimesType;
@property (copy, nonatomic) NSString *strMd5;
@property (nonatomic) long long showCount;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)fromJSONStr:(id)a0;

- (void).cxx_destruct;

@end
