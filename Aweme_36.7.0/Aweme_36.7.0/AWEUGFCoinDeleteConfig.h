@class NSString, AWEUGFCoinStayPopupInfo, AWEUGPendantBubbleUIInfo;

@interface AWEUGFCoinDeleteConfig : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEUGFCoinStayPopupInfo *stayPopup;
@property (retain, nonatomic) AWEUGPendantBubbleUIInfo *reopenBubble;
@property (nonatomic) BOOL enableDelete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
