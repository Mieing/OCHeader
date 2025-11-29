@class NSString, NSMutableArray;

@interface WCMallFunctionActivity : NSObject

@property (nonatomic) unsigned int m_uiFunctionActivityId;
@property (retain, nonatomic) NSString *m_nsFunctionActivityName;
@property (retain, nonatomic) NSString *m_nsFunctionActivityIconLink;
@property (retain, nonatomic) NSString *m_nsFunctionActivityNativeLink;
@property (retain, nonatomic) NSString *m_nsFunctionActivityH5Link;
@property (retain, nonatomic) NSString *m_nsFunctionActivityHDIconLink;
@property (retain, nonatomic) NSString *m_nsFunctionActivityInfoIconLick;
@property (nonatomic) BOOL m_bNeedGetLatestInfo;
@property (retain, nonatomic) NSMutableArray *m_arrFunctionActivityInfo;
@property (retain, nonatomic) NSMutableArray *m_arrFunctionActivityRemarkInfo;
@property (retain, nonatomic) NSMutableArray *m_arrFunctionActivityAttributeInfo;
@property (retain, nonatomic) NSMutableArray *m_arrFunctionActivityResponseRemarkInfo;
@property (retain, nonatomic) NSMutableArray *m_arrFunctionActivityResponseAttributeInfo;
@property (nonatomic) unsigned int m_uiType;
@property (retain, nonatomic) NSString *m_nsThirdPartyName;
@property (retain, nonatomic) NSString *m_nsThirdPartyDisclaimer;
@property (nonatomic) BOOL m_hasRedDot;
@property (nonatomic) BOOL m_hasDownloadRestrict;

- (id)description;
- (id)debugDescription;
- (void).cxx_destruct;

@end
