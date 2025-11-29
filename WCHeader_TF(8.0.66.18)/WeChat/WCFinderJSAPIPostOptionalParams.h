@class NSString, WCFinderSearchEventRequestParams, WCFinderJumpInfo;

@interface WCFinderJSAPIPostOptionalParams : NSObject

@property (nonatomic) BOOL presentAnimated;
@property (retain, nonatomic) WCFinderSearchEventRequestParams *finderEventInfo;
@property (copy, nonatomic) NSString *generalReportInfo;
@property (copy, nonatomic) NSString *extParamsJsonString;
@property (copy, nonatomic) NSString *mediaDescription;
@property (copy, nonatomic) NSString *postBtnTitle;
@property (retain, nonatomic) WCFinderJumpInfo *postJumpInfo;
@property (nonatomic) BOOL syncPostLoading;
@property (nonatomic) BOOL forbidSaveDraft;
@property (copy, nonatomic) NSString *clientKVReportInfo;

- (id)toJsonStr;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (id)initWithJSONString:(id)a0;
- (void).cxx_destruct;

@end
