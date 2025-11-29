@class NSString, IESLiveDressStore;

@interface IESLiveDressFragment : IESLiveRoomComponent <IESLivePrivilegeBuyDressInterface>

@property (retain, nonatomic) IESLiveDressStore *store;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

@end
