@class AWEPOILocationServiceInAppLocationAuthorizationReqConfig, NSString, AWEPOILocationServiceBarLocationAuthorizationReqConfig, AWEPOILocationServiceInAppLocationServiceReqConfig;

@interface AWEPOILocationServiceConfig : NSObject

@property (nonatomic) BOOL showServiceInAppAlert;
@property (nonatomic) BOOL showAuthorizationInAppAlert;
@property (nonatomic) BOOL forceShowAuthorizationInAppAlert;
@property (nonatomic) unsigned long long dialogStyle;
@property (nonatomic) unsigned long long dialogPicStyle;
@property (copy, nonatomic) NSString *popupPermissionImageGuideName;
@property (copy, nonatomic) NSString *popupServiceImageGuideName;
@property (copy, nonatomic) NSString *popupBottomImageGuideName;
@property (nonatomic) BOOL ignoreFrequency;
@property (copy, nonatomic) NSString *guideViewType;
@property (retain, nonatomic) AWEPOILocationServiceInAppLocationServiceReqConfig *serviceRequestAlertConfig;
@property (retain, nonatomic) AWEPOILocationServiceInAppLocationAuthorizationReqConfig *authRequestAlertConfig;
@property (retain, nonatomic) AWEPOILocationServiceBarLocationAuthorizationReqConfig *authRequestBarConfig;
@property (nonatomic) long long serviceAuthorizationConfigInterval;
@property (nonatomic) BOOL ignoreServiceAlertInterval;
@property (nonatomic) BOOL ignoreAuthourizationAlertInterval;
@property (copy, nonatomic) NSString *traceId;

- (void).cxx_destruct;

@end
