@class NSString, NSDictionary, NSURL, AWEInnerPushControlModel, NSNumber;

@interface AWEInAppSBCPushNotice : MTLModel <MTLJSONSerializing, AWEIMInAppNoticeModelProtocol>

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int service;
@property (copy, nonatomic) NSString *alertContent;
@property (copy, nonatomic) NSString *alertTitle;
@property (copy, nonatomic) NSString *oUrl;
@property (retain, nonatomic) NSURL *attachment;
@property (copy, nonatomic) NSNumber *gid;
@property (nonatomic) BOOL sbcBackwardCompatibleInAppPushTypeResolved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *contentEn;
@property (readonly, copy, nonatomic) NSString *titleEn;
@property (readonly, copy, nonatomic) NSString *fromUid;
@property (readonly, copy, nonatomic) NSString *fromSecUid;
@property (readonly, copy, nonatomic) NSString *inappPushType;
@property (readonly, copy, nonatomic) NSString *oldPushType;
@property (readonly, copy, nonatomic) NSString *openURL;
@property (readonly, nonatomic) NSURL *imageUrl;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSString *commentID;
@property (readonly, nonatomic) BOOL fromQRCode;
@property (copy, nonatomic) NSDictionary *extra;
@property (readonly, nonatomic) BOOL isSBC;
@property (readonly, copy, nonatomic) NSString *pushType;
@property (copy, nonatomic) NSDictionary *frontierPayLoad;
@property (readonly, nonatomic) NSNumber *dismissTimeInterval;
@property (copy, nonatomic) NSString *extraStr;
@property (copy, nonatomic) NSString *businessType;
@property (retain, nonatomic) AWEInnerPushControlModel *pushControlModel;
@property (retain, nonatomic) NSDictionary *normalMobParams;

+ (id)JSONKeyPathsByPropertyKey;

- (id)extTitle;
- (id)__sbcBackwardCompatibleInAppPushType;
- (BOOL)__isSBCSocialInteractionNoticeType;
- (id)__sbcSocialInteractionBackwardCompatibleContent;
- (id)__sbcSocialInteractionBackwardCompatibleTitle;
- (id)__sbcBackwardCompatibleOldPushType;
- (id)__sbcSocialInteractionInAppPushType;
- (id)__sbcSocialInteractionOldPushType;
- (id)__sbcAggregateNoticeType;
- (id)__sbcSpecificNoticeType;
- (BOOL)__isNormalInteractionNoticeType;
- (void).cxx_destruct;

@end
