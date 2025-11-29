@class NSCache, NSString;
@protocol IESIMSettingService, IESIMABService;

@interface IESIMABSyntacticSugar : NSObject <IESIMUserServiceMessage>

@property (readonly, weak, nonatomic) id<IESIMABService> service;
@property (weak, nonatomic) id<IESIMSettingService> settingService;
@property (retain, nonatomic) NSCache *abCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

@end
