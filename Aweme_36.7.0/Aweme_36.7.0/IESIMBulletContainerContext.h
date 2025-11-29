@class NSString, NSDictionary, IESIMBulletContainerPreLayoutInfo;
@protocol IESIMDynamicPatchModelProtocol;

@interface IESIMBulletContainerContext : NSObject

@property (copy, nonatomic) NSString *bulletScene;
@property (copy, nonatomic) NSString *dataIdentifier;
@property (retain, nonatomic) id<IESIMDynamicPatchModelProtocol> dynamicPatch;
@property (copy, nonatomic) id /* block */ clientDataInjectBlock;
@property (copy, nonatomic) id /* block */ serverDataExtraInjectBlock;
@property (copy, nonatomic) id /* block */ rawDataStorageInjectBlock;
@property (copy, nonatomic) id /* block */ updateServerDataBlock;
@property (copy, nonatomic) id /* block */ clientDataIsEqualBlock;
@property (nonatomic) long long bulletGenerateType;
@property (nonatomic) long long contentViewGenerateType;
@property (nonatomic) long long preloadScene;
@property (retain, nonatomic) IESIMBulletContainerPreLayoutInfo *preLayoutInfo;
@property (retain, nonatomic) NSDictionary *schemaExtraParams;
@property (nonatomic) BOOL enablePreserveData;
@property (nonatomic) BOOL enablePendingJSTask;
@property (nonatomic) BOOL enableUpdateWhenDisplaying;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long heightMode;
@property (nonatomic) long long widthMode;
@property (nonatomic) unsigned long long timestampBusinessStart;
@property (retain, nonatomic) NSDictionary *extraTrackParams;

- (void).cxx_destruct;

@end
