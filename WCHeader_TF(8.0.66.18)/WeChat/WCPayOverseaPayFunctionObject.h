@class NSString, NSMutableArray;

@interface WCPayOverseaPayFunctionObject : NSObject <PBCoding>

@property (nonatomic) unsigned int m_functionId;
@property (retain, nonatomic) NSString *m_functionName;
@property (retain, nonatomic) NSString *m_functionIconUrl;
@property (retain, nonatomic) NSString *m_functionHDIconUrl;
@property (retain, nonatomic) NSString *m_functionForegroundIconUrl;
@property (retain, nonatomic) NSString *m_h5Url;
@property (retain, nonatomic) NSString *m_nativeUrl;
@property (nonatomic) unsigned int m_propertyType;
@property (retain, nonatomic) NSMutableArray *m_activityInfoList;
@property (retain, nonatomic) NSString *m_disclaimer;
@property (retain, nonatomic) NSString *m_weapp_username;
@property (retain, nonatomic) NSString *m_weapp_pagepath;
@property (nonatomic) unsigned int m_weapp_version;
@property (retain, nonatomic) NSString *m_subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_functionId;
+ (void)PBArrayAdd_m_functionName;
+ (void)PBArrayAdd_m_functionIconUrl;
+ (void)PBArrayAdd_m_functionHDIconUrl;
+ (void)PBArrayAdd_m_functionForegroundIconUrl;
+ (void)PBArrayAdd_m_h5Url;
+ (void)PBArrayAdd_m_nativeUrl;
+ (void)PBArrayAdd_m_propertyType;
+ (void)PBArrayAdd_m_activityInfoList;
+ (void)PBArrayAdd_m_disclaimer;
+ (void)PBArrayAdd_m_weapp_username;
+ (void)PBArrayAdd_m_weapp_pagepath;
+ (void)PBArrayAdd_m_weapp_version;
+ (void)PBArrayAdd_m_subtitle;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
