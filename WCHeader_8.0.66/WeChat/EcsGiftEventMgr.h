@class NSString, NSMutableDictionary;

@interface EcsGiftEventMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *openEcsEventActionMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
