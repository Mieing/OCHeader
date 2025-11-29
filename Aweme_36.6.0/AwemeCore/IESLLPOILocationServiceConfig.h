@class IESLLPOILocationServiceBarLocationAuthorizationReqConfig, NSString, IESLLPOILocationServiceInAppLocationAuthorizationReqConfig, IESLLPOILocationServiceInAppLocationServiceReqConfig;

@interface IESLLPOILocationServiceConfig : NSObject

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
@property (retain, nonatomic) IESLLPOILocationServiceInAppLocationServiceReqConfig *serviceRequestAlertConfig;
@property (retain, nonatomic) IESLLPOILocationServiceInAppLocationAuthorizationReqConfig *authRequestAlertConfig;
@property (retain, nonatomic) IESLLPOILocationServiceBarLocationAuthorizationReqConfig *authRequestBarConfig;
@property (nonatomic) long long serviceAuthorizationConfigInterval;
@property (nonatomic) BOOL ignoreServiceAlertInterval;
@property (nonatomic) BOOL ignoreAuthourizationAlertInterval;
@property (copy, nonatomic) NSString *traceId;

- (void).cxx_destruct;

@end
