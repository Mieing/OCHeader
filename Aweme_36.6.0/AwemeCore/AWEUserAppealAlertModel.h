@class NSString, AWEUserApppealButtonInfo;

@interface AWEUserAppealAlertModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL useWebView;
@property (nonatomic) long long allowSelfUnpunish;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (retain, nonatomic) AWEUserApppealButtonInfo *leftButtonInfo;
@property (retain, nonatomic) AWEUserApppealButtonInfo *rightButtonInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)leftButtonInfoJSONTransformer;
+ (id)rightButtonInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
