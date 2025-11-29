@class NSNumber, NSArray;

@interface IESLiveInteractiveInitParams : NSObject

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSArray *supportedScenes;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isAuto;
@property (nonatomic) int uiLayout;
@property (nonatomic) unsigned long long initSource;
@property (nonatomic) BOOL passiveStart;

- (id)mapToDictionary;
- (void).cxx_destruct;

@end
