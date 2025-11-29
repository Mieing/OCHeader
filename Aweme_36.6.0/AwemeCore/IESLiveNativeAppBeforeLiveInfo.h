@class IESLiveNativeAppPermissionIntroModel, ShelfInfo;

@interface IESLiveNativeAppBeforeLiveInfo : NSObject

@property (retain, nonatomic) ShelfInfo *shelfInfo;
@property (retain, nonatomic) IESLiveNativeAppPermissionIntroModel *permissionIntroModel;
@property (nonatomic) BOOL hasTimorEnter;
@property (nonatomic) BOOL hasTimorPermit;
@property (nonatomic) BOOL supportNativeAppNewSlot;
@property (nonatomic) unsigned long long coexistType;

- (void).cxx_destruct;

@end
