@class NSString, NSArray;

@interface IESIMCombineMessageListDataComponent : AWEIMComponentBase <IESIMMessageListDataService, IESIMCombineMessageListDataService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *groups;
@property (retain, nonatomic) NSArray *messages;

+ (BOOL)canCreateComponentWithContext:(id)a0;

@end
