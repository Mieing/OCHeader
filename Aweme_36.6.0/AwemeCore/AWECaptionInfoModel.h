@class NSString;

@interface AWECaptionInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *link;
@property (copy, nonatomic) NSString *extraString;
@property (nonatomic) BOOL consumed;
@property (nonatomic) BOOL closeClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)awe_search_endTime;
- (id)awe_search_extraDic;
- (long long)awe_search_msgPriority;
- (id)awe_search_msgID;
- (BOOL)awe_search_msgNowValid;
- (unsigned long long)awe_search_msgType;
- (id)awe_search_toastMsgDic;
- (id)awe_search_logPb;
- (void).cxx_destruct;

@end
