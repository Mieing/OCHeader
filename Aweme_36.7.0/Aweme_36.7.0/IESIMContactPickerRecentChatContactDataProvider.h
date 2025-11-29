@class NSString;
@protocol IESIMContactPickerContentSectionBuilder, IESIMContactPickerContentDataProviderDelegate;

@interface IESIMContactPickerRecentChatContactDataProvider : IESIMContactPickerContactDataProvider <IESIMContactPickerContentDataProvider>

@property (retain, nonatomic) id<IESIMContactPickerContentSectionBuilder> sectionBuilder;
@property (nonatomic) long long limitCount;
@property (nonatomic) BOOL filterNotFriendUser;
@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<IESIMContactPickerContentDataProviderDelegate> providerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSectionBuilder:(id)a0;
- (id)__getContactUsers;
- (id)initWithFilterOption:(unsigned long long)a0;
- (id)initWithFilterOption:(unsigned long long)a0 limitCount:(long long)a1;
- (void).cxx_destruct;

@end
