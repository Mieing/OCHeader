@class NSDictionary, NSString;
@protocol IESLiveHybridContainerProtocol;

@interface IESLiveVideoTosUploadConfig : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) long long actionType;
@property (nonatomic) double durationLimit;
@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long minUploadDurationLimit;
@property (nonatomic) long long maxUploadDurationLimit;
@property (retain, nonatomic) NSString *minUploadLimitErrorMsg;
@property (retain, nonatomic) NSString *maxUploadLimitErrorMsg;
@property (nonatomic) BOOL hideLoading;
@property (nonatomic) BOOL dismissAfterSelect;
@property (nonatomic) BOOL showProgress;
@property (nonatomic) BOOL saveAlbum;
@property (weak, nonatomic) id<IESLiveHybridContainerProtocol> hybridView;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
