@interface AWEFormatImpl.FormatBotShareViewModel : NSObject <AWEIMShareContactListDelegate> {
    void /* unknown type, empty encoding */ _selectedContacts;
    void /* unknown type, empty encoding */ _isRequestHideContainer;
    void /* unknown type, empty encoding */ didHideContainer;
    void /* unknown type, empty encoding */ contactList;
    void /* unknown type, empty encoding */ params;
}

- (void)shareContactList:(id)a0 hideContainerListWithCompletion:(id /* block */)a1 atScene:(unsigned long long)a2;
- (BOOL)shareContactList:(id)a0 didSelectWithShareModel:(id)a1 atIndex:(long long)a2 currentSelectState:(BOOL)a3;
- (void)shareContactList:(id)a0 didSelectRecentShareWithShareModels:(id)a1 atIndex:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
