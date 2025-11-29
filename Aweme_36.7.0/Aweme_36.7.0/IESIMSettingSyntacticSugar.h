@class NSCache, NSString;
@protocol IESIMSettingService;

@interface IESIMSettingSyntacticSugar : NSObject <IESIMUserServiceMessage>

@property (weak) id<IESIMSettingService> service;
@property (retain, nonatomic) NSCache *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

@end
