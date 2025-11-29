@class NSString, IESECURLModel;

@interface IESECShopLiveInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *liveTitle;
@property (retain, nonatomic) IESECURLModel *liveCover;
@property (copy, nonatomic) NSString *streamData;
@property (copy, nonatomic) NSString *roomUrl;
@property (copy, nonatomic) NSString *popupUrl;
@property (nonatomic) long long liveType;
@property (nonatomic) BOOL hasLiveTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
