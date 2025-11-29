@interface AWEStoryImpl.StoryListInteractionCellModel : AWEStoryImpl.StoryListPostCellModel <AWEStoryImpl.StoryListControllerViewLifeCycle, AWEUserMessage, AFDAwemePermissionMessage> {
    void /* unknown type, empty encoding */ timeString;
    void /* unknown type, empty encoding */ visibleString;
    void /* unknown type, empty encoding */ nameModels;
    void /* unknown type, empty encoding */ isLiked;
    void /* unknown type, empty encoding */ diggCount;
    void /* unknown type, empty encoding */ isBeforeNoDigg;
    void /* unknown type, empty encoding */ isCommonFriendsInteraction;
    void /* unknown type, empty encoding */ $__lazy_storage_$_likeRequest;
    void /* unknown type, empty encoding */ $__lazy_storage_$_attributedStringBuilder;
    void /* unknown type, empty encoding */ $__lazy_storage_$_config;
}

- (void)onThemeChanged;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didChangeAwemePrivacyType:(id)a0 privacyPermissionType:(long long)a1 extra:(id)a2 syncHandle:(id /* block */)a3;
- (void)likeAwemeNotificationHandler:(id)a0;
- (void)diggCountUpdateNotificationHandler:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
